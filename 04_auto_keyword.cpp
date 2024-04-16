// let the compiler deduce the type:

#include <iostream>
int main()
{
    auto var_1{12};    // int: 4bytes
    auto var_2{15.6};  // double: 8bytes
    auto var_3{12.5f}; // float: 4bytes
    auto var_4{12.9l}; // long_double: 16bytes
    auto var_5{'D'};   // char: 1byte

    // int modifier suffiixes:
    auto var_6{123u};   // unsigned: 4bytes
    auto var_7{123ul};  // unsigned long: 4bytes
    auto var_8{123ull}; // long long: 8bytes

    std::cout << "variable1 occupies:" << sizeof(var_1) << "-bytes" << std::endl;
    std::cout << "variable2 occupies:" << sizeof(var_2) << "-bytes" << std::endl;
    std::cout << "variable3 occupies:" << sizeof(var_3) << "-bytes" << std::endl;
    std::cout << "variable4 occupies:" << sizeof(var_4) << "-bytes" << std::endl;
    std::cout << "variable5 occupies:" << sizeof(var_5) << "-bytes" << std::endl;
    std::cout << "variable6 occupies:" << sizeof(var_6) << "-bytes" << std::endl;
    std::cout << "variable7 occupies:" << sizeof(var_7) << "-bytes" << std::endl;
    std::cout << "variable8 occupies:" << sizeof(var_8) << "-bytes" << std::endl;

    return 0;
}