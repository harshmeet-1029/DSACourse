#include <iostream>
#include <cmath>
#include <set>
#include <algorithm>

using namespace std;

void HCF(int n, int m)
{
    multiset<int> n_value;
    multiset<int> m_value;
    // Finding factor of N
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            n_value.emplace(i);
            if ((n / i) != i)
            {
                n_value.emplace((n / i));
            }
        }
    }
    // Finding factor of m
    for (int i = 1; i <= sqrt(m); i++)
    {
        if (m % i == 0)
        {
            m_value.emplace(i);
            if ((m / i) != i)
            {
                m_value.emplace((m / i));
            }
        }
    }

    // FInding the common values
    set<int> commonValues;
    set_intersection(n_value.begin(), n_value.end(), m_value.begin(), m_value.end(), inserter(commonValues, commonValues.begin()));

    for (auto it : commonValues)
    {
        cout << it << " " << endl;
    }
}
int main()
{
    HCF(8, 12);
}