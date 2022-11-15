// series of elements of the same type placed in a contiguous memory location that can be referenced by adding an index to a unique identifier.
// first element of an array starts with index 0 (like python)

#include <iostream>

// int main(){
//     //array  of 5 integers
//     int foo [5] = {16, 2, 77, 40, 12071};
//     std::cout << foo << "\n";
//     // number of elements in {} cannot be greater than the number in []
//     // can be shorter, but remaining values will be filled with default values
//     // (0 for fundamental types)
//     
//     int bar [5] = {10, 20, 30};
//     // array in memory will be [10, 20, 30, 0, 0]
// 
//     // array with just initial values
//     int baz [5] = { };
// 
//     // leave [] empty -> compiler assumes the size for an array that matches the values included in the braces
//     int foo [] = {16, 2, 77, 40, 12071};
// 
//     // universal initialization for arrays -> no need for equal sign
//     int foo[] {10, 20, 30};
// 
//     // accessing the values of an array
//  
//     // store 75 in the 3rd element in foo
//     foo [2] = 75;
// 
//     // copy the value of the 3rd element to a variable called x
//     int x = foo[2];
//     
//     int foo[] {16, 2, 77, 40, 12071};
//     // the last element is foo[4]
//     // it would by syntatically correct to access foo[5] (even though it is beyone
//     // the last element. Won't cause compilation errors, but can cause errors at runtime
//     
//     // important note: [] have 2 different tasks: declaring an array and accessing an element of an array
//     // some valid operations with arrays
// 
//     // foo[0] = a;
//     // foo[a] = 75;
//     // b = foo[a+2];
//     // foo[foo[a]] = foo[2] + 2;
// 
// }

// int foo [] = {16, 2, 77, 40, 12071};
// int n, result=0;
// 
// int main(){ 
//     for  (n=0; n<5; ++n){ 
//         result += foo[n];
//     }
// 
//     std::cout << result;
//     return 0;
// }

// multidimensional arrays
// int main(){ 
//    int jiummy [3][5];
    // multidimensional arrays are just an abstraction - in reality everything is in one contiguous block, it's just that the compiler remembers the depth of each imaginary dimension


// }

// arrays as parameters
// we can't pass the entire block of memory represented by an array as a nargument, but we can pass its address
// same effect, but much faster
void printarray (int arg[], int length){
    for (int n=0; n<length; ++n){
        std::cout<<arg[n]<<' ';
    }
    std::cout << '\n';
}

int main(){
    int firstarray[] = {5, 10, 15};
    int secondarray[] = {2, 4, 6, 8, 10};
    printarray (firstarray, 3);
    printarray (secondarray, 5);
    return 0;
}

// including multidimensional arrays as parameters:
// base_type[][depth][depth]

// ex:
void procedure (int myarray[][3][4])
// first [] are empty, next 2 specify size dimensions
// in a sense, passing an array as an argument always looses a dimension


// there is a library for arrays, (<array>) but they allow being copied (which is expensive - so use with care)
// and only decays into pointers when told to do so