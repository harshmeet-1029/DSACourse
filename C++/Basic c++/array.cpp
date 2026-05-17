#include <iostream>

using namespace std;

int main()
{
    // Creating an array ID array3
    int a[10];
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5] >> a[6] >> a[7] >> a[8] >> a[9];

    cout << "Result";
    // accssing the single value of array
    cout << a << endl;
    cout << a[1] << endl;

    // Updating the value of array
    a[2] += 230;
    cout << a[2];
    // 2D array

    int c[3][5];
    c[0][0] = 10;
    cout << endl
         << c[0][0];
}