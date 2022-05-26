#include <iostream>
#include <string>

/*
Illustrate several different number systems for representing integers
*/


int main(){
    int num1 = 15; // Decimal
    int num2 = 017; // Octal
    int num3 = 0x0f; // Hexadecimal
    int num4 = 0b00001111; // Binary 

    std::cout << "Num 1 is : " << num1 << std::endl;
    std::cout << "Num 2 is : " << num2 << std::endl;
    std::cout << "Num 3 is : " << num3 << std::endl;
    std::cout << "Num 4 is : " << num4 << std::endl;

    return 0;
}