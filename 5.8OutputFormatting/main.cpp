#include <iostream>
#include <string> // import a bunch of functions for dealing with strings 

// libraries for output formatting
#include <iomanip>
#include <ios>


int main(){

    // std::endl; - prints out newline character
    // can also use \n after text

    /*  
     std::flush - sends immediate output to terminal
     before printing, the data goes to a buffer
     when buffer is full, buffer is sent to terminal in one go
     use std::flush to send everything to terminal directly
    */
    std::cout << "Hello world, how are you?" << std::endl;


    /*
    std::setw()  specifies the width for whatever text you want to print
    */
   std::cout << "unformatted table : " << std::endl;
   std::cout << "Daniel" <<  " " << "Gray"     << " 25" << std::endl;
   std::cout << "Stanley" << " " << "Woods"    << " 33" << std::endl;
   std::cout << "Jordan" <<  " " << "Parker"   << " 45" << std::endl;
   std::cout << "Joe" <<     " " << "Ball"     << " 21" << std::endl;
   std::cout << "Josh" <<    " " << "Carr"     << " 27" << std::endl;
   std::cout << "Izaiah" <<  " " << "Robinson" << " 29" << std::endl;

   std::cout << std::endl;
   std::cout << "Formatted table: " << std::endl;


   std::cout << "Daniel" <<  " " << "Gray"     << " 25" << std::endl;
   std::cout << "Stanley" << " " << "Woods"    << " 33" << std::endl;
   std::cout << "Jordan" <<  " " << "Parker"   << " 45" << std::endl;
   std::cout << "Joe" <<     " " << "Ball"     << " 21" << std::endl;
   std::cout << "Josh" <<    " " << "Carr"     << " 27" << std::endl;
   std::cout << "Izaiah" <<  " " << "Robinson" << " 29" << std::endl;


    /*
    cal also use justification
    */
   std::cout << std::right;


    /*
    internal justification
    */

    /*
    can specify the fill
    */


    /*
    boolalpha and noboolalpha
    */


}