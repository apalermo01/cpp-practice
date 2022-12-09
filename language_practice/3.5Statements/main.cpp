#include <iostream>

// example of a function definition
// syntax: <return type> <function name>(arg1, arg2, ...){
// int addNumbers(int first_number, int second_number){
//     int sum = first_number + second_number;
//     return sum;
// }
// int main(int argc, char **argv){
//     int firstNumber = 12;
//     int secondNumber = 9;

//     int sum = firstNumber + secondNumber;

//     sum = addNumbers(firstNumber, secondNumber);

//     sum = addNumbers(34, 7);

//     std::cout << "sum of the two numbers is: " << sum << std::endl;
//     std::cout << "sum of the two numbers is: " << addNumbers(23, 8) <<std::endl;

//     return 0;
// }

// int main(){

//     // https://stackoverflow.com/questions/47861532/use-curly-braces-or-equal-sign-when-initialize-a-variable
//     int first_number {3}; // statement
//     int second_number {7};

//     std::cout << "First number : " << first_number << std::endl;
//     std::cout << "second number : " << second_number << std::endl;

//     int sum = first_number + second_number;
//     std::cout << "Sum : " << sum << std::endl;

//     return 0;
// }


int addNumbers(int first_param, int second_param){
    
    int result = first_param + second_param;
    return result;
}

int main(){
    int first_number = {13};
    int second_number = {21};
    int sum = addNumbers(first_number, second_number);
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "second sum: " << addNumbers(30, 54) << std::endl;
    return 0;
}