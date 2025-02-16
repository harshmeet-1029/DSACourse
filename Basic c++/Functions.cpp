#include <iostream>

using namespace std;
/*
Types of fucntions
1. void fucntion -> fucntion with no return type and arguments
2. return functions -> Functions with reutnn type and no arguments
3. paramtizied functions -> FUnctions with no return type and with arguments
4. all -> Function with return type and with arguments
 */

/*
    How to create the function in C++

<return type void or datatype > <func_name>(){
}
     */

void printName()
{

    cout << "Harsh" << endl;
}

void printNamePara(string name)
{
    cout << name << endl;
}

int sum(int a, int b)
{

    return a + b;
}


int main()
{
    string name;
    int a, b;
    cout << "Enter anything";
    cin >> name;
    printName();
    printNamePara(name);
    cout << "Enter first number ";
    cin >> a;
    cout << "Enter the second number ";
    cin >> b;
    cout << endl
         << sum(a, b);
}