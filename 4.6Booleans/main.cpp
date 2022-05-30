#include <iostream>
#include <string> // import a bunch of functions for dealing with strings 


int main(){
    bool red_light {true};
    bool green_light {false};

    if(red_light == true){
        std::cout << "Stop!" << std::endl;
    }else{
        std::cout << "Go through!" << std::endl;
    }

    if(green_light){
        std::cout << "The light is green!" << std::endl;
    }else{
        std::cout << "The light is not green!" << std::endl;
    }


    std::cout << "size of bool: " << sizeof(bool) << std::endl;

    // printing out a bool (1 and 0 by default)
    std::cout << std::endl;
    std::cout << "red_light: " << red_light << std::endl;
    std::cout << "green_light: " << green_light << std::endl;

    /*
    Note: booleans use a whole byte, was to compress it more for embedded devices
    */

   // make std print true or false
   std::cout << std::boolalpha;
   std::cout << "red_light: " << red_light << std::endl;
    std::cout << "green_light: " << green_light << std::endl;

}