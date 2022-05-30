#include <iostream>
#include <iomanip> // import a bunch of functions for dealing with strings 


int main(){
    /*
    aka floating types

    float
    double (recommended default)
    long double
    */

    // Declare and initialize variable

    float number1 {1.12345678901234567890f}; // suffix: f - precision: 7
    double number2 {1.12345678901234567890}; // precision: ~15 (should be at least this)
    long double number3 {1.12345678901234567890L}; // suffix: L - precision: more than double 

    std::cout << "size of float" << sizeof(float) << std::endl; 
    std::cout << "size of double " << sizeof(double) << std::endl;
    std::cout << "size of long " << sizeof(long double) << std::endl;

    std::cout << std::setprecision(20); // control the precision from std::cout - setprecsiion is from iomanip
    std::cout << "number1 is : " << number1 << std::endl;
    std::cout << "number2 is : " << number2 << std::endl;
    std::cout << "number3 is : " << number3 << std::endl;

    // what kind of narrowing errors?
    float number4 {192400023.0f}; 
    std::cout << "number4 is : " << number4 << std::endl; // some of the nubmers got chopped off

    double number4_v2 {192400023.0}; // note: had to take out f to ensure this is being stored as a double 
    std::cout << "number4 is : " << number4_v2 << std::endl; // some of the nubmers got chopped off

    // functional notation:
    float number4_v3 (19200023.0f);
    std::cout << "number4 is : " << number4_v3 << std::endl; //  FAILS SILENTLY AGAIN

    // scientific notation
    double number5 {192400023};
    double number6 {1.92400023e8};
    double number7 {1.924e8};
    double number8 {0.000000000003498};
    double number9 {3.498e-11};

    std::cout << "number5 is : " << number5 << std::endl;
    std::cout << "number6 is : " << number6 << std::endl;
    std::cout << "number7 is : " << number7 << std::endl;
    std::cout << "number8 is : " << number8 << std::endl;
    std::cout << "number9 is : " << number9 << std::endl;



    /*
    more stuff with floating points:

    n(float) / 0 = infinity (+/-)
    0.0/0.0 = NaN (won't crash, but not much we can do with it, usually end up bad)
    */

   double number10 {5.6};
   double number11 {}; //init to 0
   double number12 {};

   // Infinity 
   double result {number10/number11};
    std::cout << number10 << "/" << number11 << " yeilds " << result << std::endl;
    std::cout << result << "+" << number10 << " yeilds " << result + number10 << std::endl;

    
    /*
    remember to put the suffix (f) or (L) otherwise it will try to be double 
    */

   return 0;
}