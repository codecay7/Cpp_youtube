
#include <iostream>
int main()
{
    int num1{65};
    int num2{70};
    bool result = (num1 < num2); // expression yeilding the condition.

    std::cout << std::boolalpha << "result: " << result << std::endl;

      // if (result)

      if (result == true) {
          std::cout << num1 << " num1 is less than " << num2 << std::endl;
      }
      // if (!result)

      if (!(result == true)){
          std::cout << num1 << " is NOT less than " << num2 << std::endl;
      }

     // using else
     std::cout << std::endl;

     if (result == true)
     {
         std::cout << num1 << " is less than " << num2 << std::endl;
     }
     else
     {
         std::cout << num1 << " is NOT less than " << num2 << std::endl;
     }
 
    // use expressions as condiotion directlty

    if (num1 < num2)
    {
        std::cout << num1 << "  is less than " << num2 << std::endl;
    }
    else
    {
        std::cout << num1 << " is not less than " << num2 << std::endl;
    }

    return 0;
}