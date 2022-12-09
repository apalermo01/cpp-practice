#include <iostream>
#include <string> // import a bunch of functions for dealing with strings 


int main(){
    int value = 5;
    std::cout << "value: " << value << std::endl;

    /*
    postfix increment

    value will be used (i.e. printed) THEN incremented
    */
    std::cout << "value (incrementing): " << value++ << std::endl;
    std::cout << "value: " << value << std::endl;

    // same thing with decrement
    value = 5;
    std::cout << "value (decrementing): " << value-- << std::endl;
    std::cout << "value: " << value << std::endl;
    

    /*
    prefix increment

    increment THEN use value
    */

    value = 5;
    std::cout << "value: " << value << std::endl;
    ++value;
    std::cout << "value (incrementing with ++ prefix): " << value << std::endl;
    
    value = 5;
    std::cout << "value: " << value << std::endl;
    --value;
    std::cout << "value (decrementing with -- prefix): " << value << std::endl;

    return 0;
}