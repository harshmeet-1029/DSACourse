#include <iostream>

using namespace std;

int main()
{
    /*
    Basic i/o

     */

    int a = 10;
    cout << "Hey how are u";
    // cin>>a;
    cout << a << endl;

    /*
    Datatypes

    int
    float
    double
    char
    bool
    long int
    string
    getline -> it take the enter line and then store it in the string
    getline(cin,<var_name>)
     */

    string name;
    cout << "Enter your name : ";
    getline(cin, name);
    cout << name << endl;

    // Char

    char ch;
    cin >> ch;
    cout << endl
         << ch;
    return 0;
}