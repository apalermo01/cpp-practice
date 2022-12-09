// can represent strings as an array of character elements
// by convention, end of a string is signaled by the null character ('\0')
// initialization of null terminated character sequences
// 	char myword[] = {'H', 'e', 'l', 'l', 'o', '\0'};
// 	string literals: text between double quotes

// since string literals are regular arrays, they have the same restrictions and can't be assigned values


// ex: if myword has already been declared, then
// myword = "Bye";
// myword[] = "Bye";
// myword = {"B", "y", "e", "\0"};
// would NOT be valid
// each element could be assigned individually


// C-strings: strings with null-termination
// there are both C-strings and library strings (from the string library) in C++
// most functions that use strings are overloaded to use both typesj 


// #include <iostream>
// #include <string>
// 
// int main() {
// 	char question1[] = "What is your name?";
// 	std::string question2 = "Where do you live?";
// 	char answer1 [80];
// 	std::string answer2;
// 
// 	std::cout << question1;
// 	std::cin >> answer1;
// 
// 	std::cout << question2;
// 	std::cin >> answer2;
// 
// 	std::cout << "Hello, " << answer1;
// 	std::cout << "from " << answer2 << "!\n";
// }


// can convert between null-terminated arrays and library strings implicitly
#include <iostream>
int main() {
	char myntcs[] = "some text";  // null-terminated sequence
	std::string mystring = myntcs; // convert c-string to string
	std::cout << mystring; // printed as a library string
  	std::cout << mystring.c_str(); // printed as a c-string	

}
