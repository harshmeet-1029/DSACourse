#include <iostream>

using namespace std;
/*

pass by vlaue-> in this a copy of varables goes to the function not the oringal value whcih is why it changes the refrence of it
pass by refrensce -> In this it pass on the memory adderress of the varables whcih is why it can change the varable directly


ARRAY AWAYS GOES WITH REFRENCE

*/

// Pass by value
void doSomething(int num)
{
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

//  when we pass the & it take the address
void doSomethingByRefrence(int &num)
{
    cout << "num2 inside  the function of refrence " << num << endl;
    num += 5;
    cout << num << endl;
}

void doSomethingWithArr(int arr[])
{
    arr[2] += 100;
    cout << "Value inside the function " << arr[2] << endl;
}
int main()
{
    int num = 4;
    doSomething(num);
    cout << num << endl;

    int num2 = 4;
    doSomethingByRefrence(num2);
    cout << "num2 outside the function" << num2 << endl;

    // Array by default send the refernce
    int n = 5;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    doSomethingWithArr(arr);

    cout
        << "Value outside the function " << arr[2] << endl;
}