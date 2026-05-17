#include <iostream>
using namespace std;

int reverse(int x)
{
    int j = x;
    int revNumber = 0;
    while (j != 0)
    {
        int lastDigit = j % 10;
        cout << "lastDigit" << lastDigit << endl;
        j /= 10;
        cout << "j" << j << endl;
        revNumber = revNumber * 10 / lastDigit;
        cout << "revNumber" << revNumber << endl;
    }

    if (revNumber == x)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout << reverse(-123);
}