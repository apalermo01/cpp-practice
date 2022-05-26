#include <iostream>
#include <string> // import a bunch of functions for dealing with strings 

// NOTE: STOPPED AT 3:01:04
/*
streams:

std::cout - prints data to console
std::cin  - reads data from terminal
std::cerr - prints errors to console
std::clog - prints log messages to console
*/

/*
std::getLine - gets the entire line from the user, not just values delimited by spaces
*/

int main(){
    // std::cout << "Hello C++20" << std::endl;

    // int age {21};
    // std::cout << "the age is: " << age << std::endl;

    // std::cerr << "Error message: something went wrong" << std::endl;
    // std::clog << "Log message: something happened" << std::endl;

    // getting data into the program
    int age1;
    std::string name; // this is using <string> that we imported above

    // std::cout << "please type your name and age: " << std::endl;

    // std::cin >> name;
    // std::cin >> age1;
    // std::cin >> name >> age1;

    // std::cout << "Hello " << name << " you are " << age1 << " years old!" <<std::endl;

    // data input with spaces
    int age3;
    std::string full_name;
    std::cout << "please type your full name and age " << std::endl;
    std::getline(std::cin, full_name);
    std::cin >> age3;
    std::cout << "Hello " << full_name
              << " you are " << age3 << " years old" << std::endl;
    return 0; 
}