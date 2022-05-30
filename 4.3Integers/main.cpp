#include <iostream>
#include <string> // import a bunch of functions for dealing with strings 



int main(){
    /*
    VARIABLE BRACED INITIALIZATION
    */

    // // without any initialization, variable will have some random garbage value
    // int elephant_count;
    // std::cout << "uninitialized value: " << elephant_count << std::endl;

    // int lion_count{}; // initializes to zero

    // int dog_count {10}; // initializes to 10 

    // int cat_count {15}; // initializes to 15

    // //can use expressions as initializer
    // int domesticated_animals {dog_count + cat_count};

    // // int narrowing_conversion {2.9}; // will throw an error for gcc10

    /*
    FUNCTIONAL VARIABLE INITIALIZATION
    */
    // int apple_count(5);
    // int orange_count(10);   
    // int fruit_count (apple_count + orange_count);   
    // //int bad_initialization (doesnt_exist3 + doesnt_exist4);

    // // Information will be lost. less safe than braced initializers. chops off decimal portion
    // int narrowing_conversion_functional (2.9);
    // std::cout << "value when trying to pass float to int through functional initialization: " << narrowing_conversion_functional << std::endl;


    /*

    big difference: braced initialization will throw an error when 
    ASSIGNMENT INITIALIZATION
    */

    // int bike_count = 2;
    int truck_count = 7;
    // int vehicle_count = bike_count + truck_count;
    // int narrowing_conversion_assignment = 2.9;
    // std::cout << "narrowing conversion assigment initialization: " << narrowing_conversion_assignment << std::endl;


    /*
    can also get the size of a type or variable in memory
    */

    std::cout << "size of int: " << sizeof(int) << std::endl;
    std::cout << "size of truck count: " << sizeof(truck_count) << std::endl;
    
    return 0;
}

