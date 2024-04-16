#include <iostream>
using namespace std;
int main()
{
    int a{25};
    int b{15};
    int check{};
   // if statement................................................................
    /*
    if(a>b)
    cout << a <<" is greater"<< endl;
    else
    cout << a<<" is lesser"<< endl;
    */

   // ternary operator................................................................
    check = (a > b) ? a: b;
    cout << check << " is greater"<<endl;
    return 0;
}