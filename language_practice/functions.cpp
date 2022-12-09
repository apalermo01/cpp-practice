// syntax to define a function:
// type name (param1, param2, ...) {statements}
// the params look like a regular variable declaration and act
// as a regular variable which is local to the function

#include <iostream>
using namespace std;

// int addition(int a, int b){
//     int r;
//     r = a + b;
//     return r;
// }

// int main(){
//     int z;
//     z = addition(5, 3);
//     cout << "The result is " << z << endl;
// }

// It does not matter the order in which they are defined - C++ always starts by calling main
// it is the only function that is called automatically 
// the code in any other function is only executed if it is called from main

// void functions - return nothing
// void printmessage(){
//     cout << "I'm a function!" << endl;
// }

// // can use void when setting up inputs to show that it takes no inputs
// void printmessage2(void){
//     cout << "I'm a function with no parameters" << endl;
// }

// int main(){
//     printmessage();
//     printmessage2();
// }


// return type for main:
// if the main function ends without a return statement, then the compiler
// will assume that the function ends with the implicit return statement: `return 0;`

// arguments passed by value and by reference
// in the function we've seen before, passing the variables as a parameters
// to a function has no effect on the variables outside the function
// in certain cases, we may want to access an external variable from within a function
// in this case, we pass the parameter by REFERENCE, not by VALUE
// void duplicate(int& a, int& b, int& c){
//     a*=2;
//     b*=2;
//     c*=2;
// }

// int main(){
//     int x=1, y=3, z=7;
//     duplicate(x, y, z);
//     cout << "x = " << x << "; y = " << y << "; z = " << z << endl;
//     return 0;
// }


// efficiency consideration and const references
// passing variables by value causes copies of that variable to be made
// this is find for fundamental types (e.g. int) - but can be costly for compound types
// it is more efficient to pass variables by reference is speed is a concern
// Functions with reference parameters are generally perceived as functions that modify the arguments
// passed
// solution: the function has to guarantee that the reference parameters are not goign to be modified 
// by the function - can call the parameters const
// re-worded: the const keyword prevents you from modifying the underyling data passed. If you try, it will throw an error when compiling

// string concatenate_ref(string& a, string& b){
//     a = a+b;
//     return a+b;
// }

// string concatenate_const(const string& a, const string& b){
//     // a = a+b; -> this would throw an error becuase the function is forbidden from modifying a or 
//     return a+b;
// }

// int main(){
//     string stra = "Hello ", strb = "World ", strc = "I'm ", strd = "Here ";
//     string res1 = concatenate_ref(stra, strb);
//     string res2 = concatenate_const(strc, strd);
//     cout << "res1: " << res1 << endl;
//     cout << "res2: " << res2 << endl;
// }

// inline functions
// this tells the compiler to insert the function body into the code instead of calling the function outright
// inline string concatenate(const string&a, const string&b){
//     return a+b;
// }
// int main(){
//     string s1="Hello ", s2="World";
//     string res = concatenate(s1, s2);
//     cout << "res: " << res << endl;
// }

// optional parameters
// int divide (int a, int b = 2){
//     int r;
//     r = a/b;
//     return (r);
// }

// int main(){
//     cout << divide (12) << '\n';
//     cout << divide (20, 4) << '\n';
//     return 0;
// }


// declaring functions
// you have to define a function before you can call it, but you don't have to define the full body

// void odd (int x);
// void even (int x);

// int main(){
//     int i;
//     do {
//         cout << "please enter a number (0 to exit): ";
//         cin >> i;
//         odd (i);
//     } while (i!=0);
// }

// void odd(int x){
//     if ((x%2)!=0) cout << "It is odd.\n";
//     else even (x);
// }

// void even(int x){
//     if ((x%2)==0) cout << "It is even.\n";
//     else odd (x);
// }

// Next: overloads and templates