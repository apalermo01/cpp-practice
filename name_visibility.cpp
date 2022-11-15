// // the point where a function, variable, compound type, etc. is declared
// // influences its scopre

// // declared outside a block - global variable
// int foo; // global variable

// // local variables: variables within a block scope

// int some_function ()
// {
//     int bar; // this is a local variable
//     bar = 0;
// }

// int other_function ()
// {
//     foo = 1; // ok since foo is a global variable
//     bar = 2; // not ok since bar is not visible from this function
// }

// // in each scope, names can only represent one entity
// int some_function_2 ()
// {
//     int x;
//     x = 0
//     double x; // wrote: name is already used in this scope
//     x = 0.0;
// }

// the visibility of a local variable extends to the end of the block, including inner blocks
// an inner block can re-utilize a name in an outer scope to refer to something else
// this will hide the entity it names outside

// #include <iostream>
// using namespace std;

// int main(){
//     int x = 10;
//     int y = 20;
//     {
//         int x; // ok since we're in inner scope
//         x = 50; // sets value to inner x
//         y = 50; // sets value to outer y
//         cout << "inner block:" << endl;
//         cout << "x: " << x << endl;
//         cout << "y: " << y << endl;
//     }

//     cout << "outer block: " << endl;
//     cout << "x: " << x << endl;
//     cout << "y: " << y << endl;
//     return 0;
// }

// if you declare a variable in a section that introduces a block (e.g. function
// definitions and loops, conditions) are local to the block they introduce

// namespaces
// group entities that would otherwise have a global scope into a narrower scope - giving them a namespace scope

// namespace myNamespace{
//     int a, b;
// }

// to access a value in a namespace outside the namespace, use the scope operator
// ex:
// myNamespace::a;
// myNamespace::b;

// very useful to avoid name collisions

// #include <iostream>
// using namespace std;

// namespace foo{
//     int value() {return 5;}
// }

// namespace bar{
//     const double pi = 3.1416;
//     double value(){ return 2*pi;}
// }

// int main(){
//     cout << foo::value() << endl;
//     cout << bar::value() << endl;
//     cout << bar::pi << endl;
//     return 0;
// }

// namespaces can be split and extend across different translation units and different files
// namespace foo {int a;}
// namespace bar {int b;}
// namespace foo {int c;}

// here, foo have named entities a and c, bar has b

// using
// introduces the namespace to the current region eliminating the need to qualify the name
// #include <iostream>
// using namespace std;

// namespace first{
//     int x = 5;
//     int y = 10;
// }

// namespace second{
//     double x = 3.1416;
//     double y = 2.7183;
// }

// int main(){
//     using first::x;
//     using second::y;

//     cout << x << endl;
//     cout << y << endl;
//     cout << first::y << endl;
//     cout << second::x << endl;
//     return 0;
// }

// using can also be directed towards the entire namespace
// int main(){
//     using namespace first;
//     cout << x << endl;
//     cout << y << endl;
//     cout << second::x << endl;
//     cout << second::y << endl;
//     return 0;
// }

// namespace aliasing
// can rename namespaces

// namespace new_name = current_name;

// the std namespace
// no real difference between:
// cout << "Hello World";
// and
// std::cout << "Hello World";

// storage classes
// global / namespace scope: static storage - allocated for entire duration of program - automatically initialized to zeros
// local variables (declared within a block): automatic storage - storage is only available in block where they're declared, after that it's used for whatever - random initialization

// #include <iostream>
// using namespace std;

// int x;

// int main(){
//     int y;
//     cout << x << endl;
//     cout << y << endl;
//     return 0;
// }