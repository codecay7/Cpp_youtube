#include <iostream>
using namespace std;
class Person
{
private:
    string name;
    int age;
    string address;

public:
    void input()
    {
        cout << "enter name" << '\n';
        cin >> name;

        cout << "enter age" << '\n';
        cin >> age;

        cout << "enter address" <<  '\n';
        cin >> address;
    }
    void show()
    {
        cout << "**Name is: " << name << '\n';
        cout << "**Age is:  " << age << '\n';
        cout << "**Address is: " << address << '\n';
    }
};

int main()
{
    Person name1;

    name1.input();
    name1.show();




    return 0;
}
