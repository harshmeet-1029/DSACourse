#include <iostream>
using namespace std;

int reverse(int x)
{
    // code here
    int revNumber = 0;

    while (x != 0)
    {
        int lastDigit = x % 10; // Extract the last digit
        x /= 10;                // Remove the last digit from x

        // Check for overflow/underflow before multiplying by 10
        if (revNumber > INT_MAX / 10 || (revNumber == INT_MAX / 10 && lastDigit > 7))
        {
            return 0; // Overflow
        }
        if (revNumber < INT_MIN / 10 || (revNumber == INT_MIN / 10 && lastDigit < -8))
        {
            return 0; // Underflow
        }

        revNumber = revNumber * 10 + lastDigit;
    }
    
    return revNumber;
}

int main()
{
    cout << reverse(-123);
}