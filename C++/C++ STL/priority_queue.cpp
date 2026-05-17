#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int> q;
    q.push(5);
    q.push(2);
    q.push(8);
    q.push(10);

    cout << q.top(); // print 10

    q.pop(); // {8,5,2}

    priority_queue<int, vector<int>, greater<int>> qs;
    qs.push(5);
    qs.push(2);
    qs.push(8);
    qs.push(10);

    cout << endl
         << qs.top(); // print 2

    qs.pop(); // {5,8,10}
}