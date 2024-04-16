#include <iostream>
using namespace std;
int mian()
{

    int a[10] = {2,1,3,4,2,1,3,12,23,13};
    int i;
    for (i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i < 10; i++)
    {
        cout << "array is" << a[i] << endl;
    }

    return 0;
}
