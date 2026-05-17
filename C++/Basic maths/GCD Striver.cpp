#include <iostream>
#include <cmath>
#include <set>
#include <algorithm>

using namespace std;

void HCF(int n, int m)
{

    for (int i = min(n, m); i >= 1; i++)
    {
        if (n % i == 0 && n % 2 == 0)
        {
            cout << i;
            break;
        }
    }
}
int main()
{
    HCF(8, 12);
}