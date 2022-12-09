#include <iostream>
#include <string> // import a bunch of functions for dealing with strings 


int main(){

    // used when you don't explicilty want to specify the type
    auto var1 {12};
    auto var2 {13.0};
    auto var3 {14.0f};
    auto var4 {15.0L};
    auto var5 {'e'};


    auto var6 {123u}; // unsigned
    auto var7 {123ul}; // unsigned long
    auto var8 {123ll}; // long long

    std::cout << "var1 occupies : " << sizeof(var1) << " bytes" << std::endl;
    std::cout << "var2 occupies : " << sizeof(var2) << " bytes" << std::endl;
    std::cout << "var3 occupies : " << sizeof(var3) << " bytes" << std::endl;
    std::cout << "var4 occupies : " << sizeof(var4) << " bytes" << std::endl;
    std::cout << "var5 occupies : " << sizeof(var5) << " bytes" << std::endl;
    std::cout << "var6 occupies : " << sizeof(var6) << " bytes" << std::endl;
    std::cout << "var7 occupies : " << sizeof(var7) << " bytes" << std::endl;
    std::cout << "var8 occupies : " << sizeof(var8) << " bytes" << std::endl;


}