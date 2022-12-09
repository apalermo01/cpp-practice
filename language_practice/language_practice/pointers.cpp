// in cpp, treat the memory of a computer like a succession of memory cells, each with unique addresses
// ex the memory cell wtih address 1776 always follows immediately after the cell with 1775, and precedes the one with 1777


// addres-of operator: &
// foo = &myvar; // assigns the address of myvar to foo
// foo is now a pointer

// dereference operator: *
// get the value pointed to by the pointer
// baz = *foo; // get the value that foo points to, store it in baz

// example with declaring pointers
#include<iostream>

void declare_pointers(){
	int * number;
	char * character;
	double * decimals;
}

// each of these pointers point to a different data type, but they all have the same size. Remember, this is becuase they don't store the actual value, the store the LOCATION of that value

 // note that the * only means that it is a pointer, it is NOT a dereference operator. They are 2 different things with the same sign.

// my first pointer
int my_first_pointer() {
	int firstvalue, secondvalue;
	int*  mypointer;					// initialize a pointer that points to an integer
	
	mypointer = &firstvalue; 		// set mypointer to the address of firstvalue
	*mypointer = 10; 				// look at the spot in memory that mypointer points to, put 10 in that slot (this should set first value to 10)
	mypointer = &secondvalue; 		// now set mypointer to the address of second value 
	*mypointer = 20;				// look at the spot in memory that mypointer points to, put 20 in that slot (this shoudl set secondvalue to 20)
	std::cout << "firstvalue is " << firstvalue << "\n";
	std::cout << "secondvalue is " << secondvalue << "\n";

	return 0;
}

// another example
int ex2() {
	 int firstvalue = 5, secondvalue = 15;
	 int *p1, *p2;

	 p1 = &firstvalue;		// p1 = address of firstvalue
	 p2 = &secondvalue; 	// p2 = address of secondvalue

	 *p1 = 10;				// value pointed to by p1=10
	 *p2 = *p1;				// value pointed to by p2 = value pointed to by p1

	 p1 = p2; 				// p1 = p2 (value of pointer is copied

	 *p1 = 20;				// value pointed to by p1 = 20

	 std::cout << "firstvalue is " << firstvalue << "\n";
	 std::cout << "secondvalue is " << secondvalue << "\n";
	 return 0;
}

// pointers and arrays
// the idea of arrays is very close to pointers. Arrays work a bit like 
// pointers to their first element. Can also be implicitly converted to pointers
//
// ex:
// int myarray [20];
// int * mypointer;
// This would be valid:
// mypointer = myarray

// another pointer example
int pointer_ex_2(){
	int numbers[5];
	int *p;
	p = numbers;
	*p = 10; 			// set the value that p points to to 10
	p++;
	*p = 20;			// now that p is incremented by 1, set the value that p points to to 20 
						// (this is the next value of the array)
	p = &numbers[2]; 	// set p to point to element 3 in numers (equivalent to p++)
	*p = 30;			// set the thing that p points to to 30
	p = numbers + 3;	// now p points to numbers[3]
	*p = 40;
	p = numbers;
	*(p+4) = 50;		// pointer arithmetic!
	for (int n=0; n<5; n++)
		std::cout << numbers[n] << ", ";
	return 0;
}


// pointer arithmetics
// only addition and subtraction are defined
// When incrementing a pointer by 1, we set the pointer to the next available spot in memory, so
// even though we do ++pointer, it may increment the value of the pointer by 1000, 2000, etc.

int pointer_arithmetic(){
	// define some pointers
	char *mychar;
	short *myshort;
	long *mylong;
	std::cout << "*mychar: " << mychar << "\n";
	std::cout << "*myshort: " << myshort << "\n";
	std::cout << "*mylong: " << mylong << "\n";
	
	std::cout << "++mychar: " << ++mychar << "\n";
	std::cout << "++myshort: " << ++myshort << "\n";
	std::cout << "++mylong: " << ++mylong << "\n";

	// 4 combinations of dereference operator with prefix and suffix increment operator
	int myint = 2;
	int *p = &myint;
	std::cout << "p = " << p << "\n";
	std::cout << "*p++ (same as *(p++) - increment pointer then dereference the unincremented address " << *p++ << "\n";	
	return 0;
}

// pointers and const
// can declare pointers that can read the value it points to, but not write to it
// use the const qualifier
int demo_const(){
	int x;
	int y = 10;
	const int *p = &y;
	x = *p; 				// ok: reading p
	//*p = x; 	// error: modifying p, which is const-qualified (error at compile-time)
	return 0;
}
// pointers to const are NOT implicitly convertible to pointers to non-const
// use-case: function parameters. A function that takes a pointer to non-const as 
// a parameter can modify the value passed as an argument, while a function that takes a 
// pointer to const as a parameter cannot

// pointers as arguments demo

void increment_all (int* start, int* stop){
	int * current = start;
	while (current != stop) {
		++(*current); // increment value pointed
		++current; 	  // increment pointer
	}
}

void print_all(const int* start, const int* stop){
	const int * current = start; // makes a pointer that points to start
	while (current != stop) {
		std::cout << *current << "\n";
		++current; // increment pointer
	}
}

// int main(){
// 	int numbers[] = {10, 20, 30};
// 	increment_all (numbers, numbers+3);
// 	print_all (numbers, numbers+3);
// 	return 0;
// }

// Note about const pointers: the pointers in print_all can be modified, but the values they point to cannot
void pointer_init()
{
	int x;
	      int *       p1 = &x; // non-const pointer to non-const int (both can be changed)
	const int *       p2 = &x; // non-const pointer to const int (value cannot be changed, pointer can)
	      int * const p3 = &x; // const pointer to non-const int (pointer can't point to another value, but can change that value)
	const int * const p4 = &x; // const pointer to const int

	const int * p2a = &x; //      non-const pointer to const int
	int const * p2b = &x; // also non-const pointer to const int
	// there's a lot of debate over which of the above 2 are better
}


