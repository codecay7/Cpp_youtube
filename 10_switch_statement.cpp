
/* condiotion---->Integral types and enums: int,char,
long,unsigned short.but not suitable for string.
*/
#include <iostream>
using namespace std;
// tools
const int pen{5};
const int pencil{4};
const int marker{3};
int main()
{
    int tool(pencil); // input here

    switch (tool)
    {
    case (pen):
        cout << "pen is running" << endl;
        break;

    case (pencil):
        cout << "pencil is running" << endl;
        break;

    case (marker):
        cout << "marker is running" << endl;
        break;

    default:
        cout << "use among these please: pen,pencil,marker" << endl;
        break;
    }

    return 0;
}

//----------------------------------------------------------------
// simple Calcualator

#include <iostream>
using namespace std;
int main()
{
    int x, y;
    char op;

    cout << "enter op to get result" << op << endl;
    cin >> op;
    cout << "enter two operands" << endl;
    cin >> x >> y;
    switch (op)
    {
    case '+':
        cout << "x"
             << "+"
             << "y"
             << "=" << x + y;
        break;

    case '-':
        cout << "x"
             << "-"
             << "y"
             << "=" << x - y;
        break;

    case '*':
        cout << "x"
             << "*"
             << "y"
             << "=" << x * y;
        break;

    case '/':
        cout << "x"
             << "/"
             << "y"
             << "=" << x / y;
        break;

    case '%':
        cout << "x"
             << "%"
             << "y"
             << "=" << x % y;
        break;

    default:
        cout << "please choose between:'+','-','*','/','%' ";
        break;
    }

    return 0;
}