#include <iostream>
using namespace std;

int printAllDivisors(int n)
{
    int i = 1;
    int result = 0;
    for (int val = 0; val < n; val++)
    {

        int temp = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                temp += j;
            }
        }
        result += temp;
        i++;
    }
    return result;
}

int main()
{
    cout << printAllDivisors(4);
}