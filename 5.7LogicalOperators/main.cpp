#include <iostream>
#include <string> // import a bunch of functions for dealing with strings 


int main(){
    /*
    && -> and
    || -> or
    ! -> not

    */
   bool a {true};
   bool b {false};
   bool c {true};

   std::cout << std::boolalpha;

    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "Basic AND operations" << std::endl;

    std::cout << "a && b " << (a && b) << std:: endl;
    std::cout << "a && b " << (a && c) << std:: endl;
    std::cout << "a && b && c " << (a && b && c) << std:: endl;

   std::cout << "Basic OR operations" << std::endl;

    std::cout << "a || b " << (a || b) << std:: endl;
    std::cout << "a || b " << (a || c) << std:: endl;
    std::cout << "a || b || c " << (a || b || c) << std:: endl;

   std::cout << "Basic NOT operations" << std::endl;

    std::cout << "!a " << (!a) << std:: endl;
    std::cout << "!b " << (!b) << std:: endl;
    std::cout << "!c " << (!c) << std:: endl;

}