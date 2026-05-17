#include <iostream>

using namespace std;

int main()
{

    int a = 1245;
    while (a != 0)
    {

        cout << a % 10 << endl;
        cout << "a/10 " << a / 10 << endl;
        a = a / 10;
    }
}