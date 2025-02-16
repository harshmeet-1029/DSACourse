#include <iostream>

using namespace std;

int main()
{

    string s = "Harsh";
    // Finding the length of string

    int len = s.size();
    // accessing the single value of the string
    cout << endl
         << s[2]; // ex op -> r

    // updating the value
    s[len - 1] = 'u';
    cout << endl
         << s;
}