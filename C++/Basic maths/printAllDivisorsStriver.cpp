#include <iostream>
#include <cmath>
#include <set>
using namespace std;

void printAllDivisors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}

// Working in effecten way
void printAllDivisorsEffectint(int n)
{
    multiset<int> st;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            st.emplace(i);
            if ((n / i) != i)
            {
                st.emplace(n / i);
            }
        }
    }
    for (auto val : st)
    {
        cout << val << " ";
    }
}

int main()
{
    printAllDivisors(36);
    cout << endl
         << "new method" << endl;
    printAllDivisorsEffectint(36);
}