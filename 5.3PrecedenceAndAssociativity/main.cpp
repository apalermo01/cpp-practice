#include <iostream>
#include <string> // import a bunch of functions for dealing with strings 


int main(){
    /*
    what happens in the case of:
    a + b * c - d / e - f + g

    multiplication / division before addition / subtraction
    so:
    a + (b * c) - (d / e) - f + g

    precedence: which operations to do first
    associativity: which direction or which order (some are L to R, others R to L)

    https://en.cppreference.com/w/cpp/language/operator_precedence
    */


   int a {6};
   int b {3};
   int c {8};
   int d {9};
   int e {3};
   int f {2};
   int g {5};


    int result = a + b * c - d / e - f + g;

    std::cout << "result: " << result << std::endl;

    return 0;
}