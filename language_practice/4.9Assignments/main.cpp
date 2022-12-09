#include <iostream>
#include <string> // import a bunch of functions for dealing with strings 


int main(){
    // can assign a new value after a variable is initialized
    // just be very careful about auto assignments 

    int var1{123};
    std::cout << "var1: " << var1 << std::endl;

    var1 = 55; // Assign
    std::cout << "var1: " << var1 << std::endl;

    std::cout << std::endl;

    std::cout << "----------------------" << std::endl;

    double var2 {44.55};
    std::cout << "var2: " << var2 << std::endl;

    var2 = 99.99;
    std::cout << "var2: " << var2 << std::endl;

    std::cout << std::endl;

    std::cout << "----------------------" << std::endl;
    bool state = true;
    std::cout << "state: " << state << std::endl;

    state = false;
    std::cout << "state: " << state << std::endl;
    std::cout << std::endl;
    
    std::cout << "----------------------" << std::endl;
    
    auto var3 {333u};
    var3 = -22; // DANGER

    std::cout << "var3: " << var3 << std::endl; // GIVES A NONSENSE RESULT
    
    
    return 0;
}