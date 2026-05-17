#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if (n < m)
    {
        cout << "Lesser";
    }
    else if (n == m)
    {
        cout << "Equal";
    }
    else
    {
        cout << "Greater";
    }
    return 0;
}