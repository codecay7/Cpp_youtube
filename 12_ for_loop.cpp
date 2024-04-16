#include <iostream>
int main()
{
    /*
    // to print 10 times "i love c++""
    std::cout << "i love c++" << std::endl;
    std::cout << "i love c++" << std::endl;
    std::cout << "i love c++" << std::endl;
    std::cout << "i love c++" << std::endl;
    std::cout << "i love c++" << std::endl;
    std::cout << "i love c++" << std::endl;
    std::cout << "i love c++" << std::endl;
    std::cout << "i love c++" << std::endl;
    std::cout << "i love c++" << std::endl;
    std::cout << "i love c++" << std::endl;



    // using for loop to print the same thing...

    for (unsigned size_t i{0}; i < 10001; i++)
    {
        std::cout << i << ": I love c++" << std::endl;
    }
    std::cout << "LOOP DONE!" << std::endl;


    // use of size_t: A representationof same unsigned int for positive numbers[sizes]

    for ( size_t i{0}; i < 10; i++)
    {
        std::cout<<"i love c++"<<std::endl;
    }
        std::cout << "LOOP DONE!" << std::endl;
*/

    //sizeof (size_t)
     std::cout << "size of(size_t): " << sizeof(size_t) << std::endl;

    // DONT HARD CODE VALUES
    /*
       const size_t COUNT{100};
           for ( size_t i{0}; i < COUNT; i++)
       {
           std::cout<<"i love c++"<<std::endl;
       }
   */
    for(unsigned i {0}; i < 100; i++)
    { 
        std::cout << i << "- i love you"
                  << "\n";
    }
    return 0;
}