#include <iostream>
#include <string> // import a bunch of functions for dealing with strings 


int main(){
    int number1 {45};
    int number2 {60};
    std::cout << "number1 : " << number1 << std::endl;
    std::cout << "number2 : " << number2 << std::endl;

    std::cout << std::endl;
    std::cout << "Comparing variables" << std::endl;

    std::cout << std::boolalpha;

    // note - forgetting () in num1 < num2 - results in error
    // this is becuase << has higher precedence than comparison, so it will try to evaluate << first
    // it thinks we're trying to print number1, then evaluate less than
    std::cout << "number1 < number2 : " << (number1 < number2) << std::endl;
    std::cout << "number1 > number2 : " << (number1 > number2) << std::endl;
    std::cout << "number1 <= number2 : " << (number1 <= number2) << std::endl;
    std::cout << "number1 >= number2 : " << (number1 >= number2) << std::endl;
    std::cout << "number1 == number2 : " << (number1 ==  number2) << std::endl;
    std::cout << "number1 != number2 : " << (number1 != number2) << std::endl;

}