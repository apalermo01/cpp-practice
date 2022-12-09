// in all the previous examples, memory needs were determined before execution - however, there any many cases where that is not the case. 
//
// allocate dynamic memory using new
// syntax:
// pointer = new type
// pointer = new type [number_of_elements]
//
// for regular arrays, the size must be a constant expression.
// When using new, we can pass in any variable as [number_of_elements]
//
// 2 mechanisms to check if allocation was successful:
// by default, throws an exception
// foo = new int [5]; // if allocation fails, an exception is thrown
//
// there is also nothrow, which will give a null pointer and continue executing if allocation fails
// int * foo;
// foo = new (nothrow) int [5];
// if (foo == nullptr) {
// 	// error assigning memory
// 	}
//
// 	exception mechanism is generally preferred, nothrow requires checking for null pointers
//
//
// 	delete and delete[]
// 	delete pointer;
// 	delete[] pointer;
//
// 	first: releases memory of a single element allocated using new
// 	second: releases memory allocated for arrays using new and a size in []
// 	value passed is either a pointer or null pointer (if null pointer, delete doesn't do anything
#include <iostream>
#include <new>

int main()
{
	int i, n;
	int * p;
	std::cout << "How many numbers would you like to type? ";
	std::cin >> i;
	p = new (std::nothrow) int[i];
	if (p == nullptr)
		std::cout << "Error: memory could not be allocated";
	else
	{
		for (n=0; n<i; n++)
		{
			std::cout << "Enter number: ";
			std::cin >> p[n];
		}

		std::cout << "You have entered: ";
		for (n=0; n<i; n++)
			std::cout << p[n] << ",";

		delete[] p;
	}

	return 0;
}
