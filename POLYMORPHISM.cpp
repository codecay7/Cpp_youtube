
// compile time polymorphism////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

void showinfo(int age)
{
    cout << "age: " << age << endl;
}
void showinfo(string name)
{
    cout << "name: " << name << endl;
}

void showinfo(double salary)
{
    cout << "salary: " << salary << endl;
}

int main()
{
    showinfo("akhilesh");
    showinfo(34);
    showinfo(563.5);

    return 0;
}
*/
// runtime polymorphism////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class A
{
public:
    void disp()
    {
        cout << "it's class A" << endl;
    }
};
class B : public A
{
public:
    void disp()
    {
        cout << "it's class B" << endl;
    }
};

int main()
{
    A *ptr;
    B obj1;
    ptr = &obj1;
    ptr->disp();

    return 0;
}