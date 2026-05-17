#include <iostream>
using namespace std;

bool isArmtstrong(int val)
{
    int j = val;
    int armHolder = 0;
    while (j != 0)
    {
        int lastDigit = j % 10;
        armHolder += lastDigit * lastDigit * lastDigit;

        j = j / 10;
    }

    return armHolder == val;
}

int main()
{
    cout << isArmtstrong(35);
}