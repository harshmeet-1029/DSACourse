#include <iostream>
#include <queue>

using namespace std;
int main()
{

    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4); // {1,2,4}

    q.back() += 5; // 4+5 // q.back() = q.back() + 5

    cout
        << q.back() << endl;   // 9 as 4+5 is 9
    cout << q.front() << endl; // print 1

    q.pop();                   //{2,9}
    cout << q.front() << endl; // print 2
}
