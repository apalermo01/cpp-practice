#include <iostream>
#include <string> // import a bunch of functions for dealing with strings 

// libraries for output formatting
#include <iomanip>
#include <ios>


int main(){

    // std::endl;  - prints out newline character
    std::cout << "Hello";
    std::cout << "World";
    
    std::cout << std::endl;

    std::cout << "--------------" << std::endl;

    std::cout << "Hello" << std::endl;
    std::cout <<  "World" << std::endl;

    std::cout << std::endl;

    std::cout << "Hello\n";
    std::cout << "World\n";
    // can also use \n after text

    // =============================================================
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


   std::cout << std::setw(10) << "Lastname" << std::setw(10) << "Firstname" << std::setw(5) << "Age" << std::endl; 
   std::cout << std::setw(10) << "Daniel" <<   std::setw(10) << "Gray"     << std::setw(5) << " 25" << std::endl;
   std::cout << std::setw(10) << "Stanley" <<  std::setw(10) << "Woods"    << std::setw(5) << " 33" << std::endl;
   std::cout << std::setw(10) << "Jordan" <<   std::setw(10) << "Parker"   << std::setw(5) << " 45" << std::endl;
   std::cout << std::setw(10) << "Joe" <<      std::setw(10) << "Ball"     << std::setw(5) << " 21" << std::endl;
   std::cout << std::setw(10) << "Josh" <<     std::setw(10) << "Carr"     << std::setw(5) << " 27" << std::endl;
   std::cout << std::setw(10) << "Izaiah" <<   std::setw(10) << "Robinson" << std::setw(5) << " 29" << std::endl;


    /*
    cal also use justification
    */
   std::cout << std::right;


    /*
    internal justification
    for negative number: sign will be left-justified but number will be right justified
    */

    /*
    can specify the fill
    std::setfill(<fill character>)
    */


    /*
    boolalpha and noboolalpha
    forces std::count to show output as True or False
    */
   
    /*
        std::showpos and std::noshowpos
    */

    /*
        can also show numbers using other bases (e.g. dec, hex, oct)
        does not with with floats
    */

    /*
        std::showbase - displays the base of the output
        hex: starts with 0x
        oct: starts with 0
    */

   /*
    std::scientific
    std::fixed
   */


}