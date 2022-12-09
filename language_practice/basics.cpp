#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// constants //
// const double pi = 3.14159;
// const char newline = '\n';

// int main () {
//     double r=5.0;
//     double circle;

//     circle = 2 * pi * r;
//     cout << circle << newline;
// }


// preprocessor definitions
// #define PI 3.14159
// #define NEWLINE '\n'

// int main () {
//     double r = 5.0;
//     double circle = 2 * PI * r;
//     cout << circle << NEWLINE;
// }


// assignment
// int main() {
//     int a, b; // a: ?,  b: ?
//     a = 10;   // a: 10, b: ?
//     b = 4;    // a: 10, b: 4
//     a = b;    // a: 4,  b: 4 - only copies the value, not the identity
//     b = 7;    // a: 4,  b: 7

//     cout << "a: " << a << endl;
//     cout << "b: " << b << endl; 
// }


// increment / decrement
// int main() {
//     int x = 3;
//     int y = ++ x;
//     cout << "x: " << x << "; y = ++x: " << y << endl;

//     int x1 = 3;
//     int y1 = x1++;
//     cout << "x: " << x1 << "; y = x++: " << y1 << endl;
// }

// conditional ternary operator
// syntax:
// condition ? result1 : result2
// if condition is true, evaluates result 1, otherwise evaluates result 2
// int main() {
//     int a, b, c;

//     a = 2;
//     b = 7;
//     c = (a > b) ? a: b;
//     cout << c << '\n';
// }

// comma operator
// separates two or more expressions where only one is expected.
// evalutes expressions in order of left to right then returns the rightmost value
// int main() {
//     int a, b;
//     a = (b=3, b+2);
//     cout << "a: " << a << endl;
// }

// user input
// int main(){
//     int i;
//     cout << "give me an integer" << endl;
//     cin >> i;
//     cout << "you entered: " << i << endl;
// }

// string stream - convert string to an integer type
// int main(){
//     string mystr;
//     float price = 0;
//     int quantity = 0;

//     cout << "Enter price: " << endl;
//     getline (cin, mystr);
//     stringstream(mystr) >> price;
//     cout << "Enter quantity: " << endl;
//     getline (cin, mystr);
//     stringstream(mystr) >> quantity;
//     cout << "Total price: " << price * quantity << endl;
//     return 0;
// }

// for loop
// int main(){
//     for (int n=10; n>0; n--){
//         cout << n << ", ";
//     }

//     cout << "liftoff!\n";
// }

// for loop with comma operator
// int main() {
//     int n, i;
//     for (n=0, i=100; n!=i; ++n, --i){
//         cout << "n: " << n << "; i: " << i << endl;
//     }
// }


// range based for loop
// int main() {
//     string str {"Hello!"};
//     for (char c: str){
//         cout << "[" << c << "]";
//     }
//     cout << '\n';
// }

////////////////////////////////////////////////////
// jump statements
// jumps to a specific location

// break
// int main() {
//     for (int n=10; n>0; n--) {
//         cout << n << ", ";
//         if (n==3){
//             cout << "countdown aborted!";
//             break;
//         }
//     }
// }

// continue
// int main(){
//     for (int n=10; n>0; n--){
//         if (n==5) continue;
//         cout << n << ", ";
//     }
//     cout << "liftoff!\n";
// }

// goto
// absolute jump - be very careful with this
// int main(){
//     int n=10;
//     label:
//     cout << n << ", "; 
//     n--;
//     if (n>0) goto label;
//     cout << "liftoff! \n";
// }

// switch 
// uses a series of labels with break statements
// YOU MUST USE BREAK AFTER EACH EXPRESSION - otherwise the program
// will execute all statements in other blocks below the desired case

// switch statements only work for constant expressions
// for a range or values that are not constant, better to use a concatenation
// of if an else statements
// int main(){
//     cout << "enter a number" << endl;
//     int n = 0;
//     string input_string;
//     getline(cin, input_string);
//     stringstream(input_string) >> n;

//     switch(n){
//         // if x=1, all case 1, case 2, and case 3 will run then the switch statement will break
//         case 1:
//         case 2:
//         case 3:
//             cout << "x is 1, 2, or 3";
//             break;
//         default:
//             cout << "x is not 1, 2, or 3";
//     }
//     cout << endl;
// }