//first run then check the condition.


#include <iostream>
int main()
{
 
   int i{9}; // iterator declaration

    do{
        std::cout <<  i  << " : I Love CPP" << std::endl;
        i++;             // incrementation
    } while (i <10); // test
        
        std::cout << "LOOP DONE!" << std::endl;
    return 0;
}