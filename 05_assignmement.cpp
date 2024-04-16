#include <iostream>
int main()
{
    int var_1{12345}; // decalre and initialize.
    std::cout << "var_:" << var_1 << "\n";

    var_1 = 555; // assign 
    std::cout << "var_:" << var_1 << "\n";

    std::cout << "-----------------"
              << "\n";

    // -----------------------------------------------------

    double var_2{12.34}; // decalre and initialize.
    std::cout << "var_2:" << var_2 << "\n";

    var_2 = 55.5; // assign 
    std::cout << "var_2:" << var_2 << "\n";

    std::cout << "-----------------"
              << "\n";

    // -----------------------------------------------------
    bool state{false}; // declare and initialize
    std::cout << std::boolalpha;
    std::cout << "state:" << state << "\n";

    state = true; // assign
    std::cout << "state:" << state
              << "\n";
    std::cout << "-----------------"
              << "\n";

    // -----------------------------------------------------
    // auto type deduction.
    //  *carefull with auto assignments.

    auto var_3{4321u}; // Declare and initialize with type deduction.

    var_3 = -23; // *assign negative number. DANGER!.This change will give garbage value.
    std::cout << "var_3" << var_3 << std::endl;

    return 0;
}