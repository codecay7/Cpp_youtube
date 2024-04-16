#include <iostream>
using namespace std;

int main()
{

    double result = add(10, 20);
    cout << "result: " << result << endl;
    return 0;
}

double add(double a, double b)
{
    return a + b;
}