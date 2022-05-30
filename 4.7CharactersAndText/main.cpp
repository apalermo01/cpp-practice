#include <iostream>
#include <string> // import a bunch of functions for dealing with strings 


int main(){


    char character1 {'a'};
    char character2 {'r'};
    char character3 {'r'};
    char character4 {'o'};
    char character5 {'w'};

    std::cout << character1 << std::endl;
    std::cout << character2 << std::endl;
    std::cout << character3 << std::endl;
    std::cout << character4 << std::endl;
    std::cout << character5 << std::endl;

    // chars take up one byte in memory (2^8 = 256 possible values)
    std::cout << std::endl;

    // can also assign a valid ascii code and interpret as char or integer
    char value = 65; // ASCII for 'A'
    std::cout << "value: " << value << std::endl;
    std::cout << "value(int): " << static_cast<int>(value) << std::endl;
}