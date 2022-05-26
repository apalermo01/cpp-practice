#include <iostream>

int main(){

    // compile time error (skipped semicolon)
    std::cout << "Hello World!" << std::endl;

    // runtime error
    // int value = 7/0;
    // std::cout << "value : " << value << std::endl; 

    return 0;
}