#include <iostream>
int main()
{

    // using while loop for print I love cpp 10 times:
    const unsigned int COUNT{10};
    int i{0}; // iteration

    while (i < COUNT){ // testing
        std::cout << i <<" : I love c++" << std::endl;

        ++i; // incrementation
    }
    std::cout << "LOOP DONE!" << std::endl;

    return 0;
} 