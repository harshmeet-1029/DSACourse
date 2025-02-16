#include <iostream>
#include <stack>

using namespace std;
int main()
{

     /*
 Stack is LIFO (last in first out )
 people coming
 --
    [-------] -> counter

 stack<int> s;
 s.push(19);
 [19]
 s.push(20);
 [19]
 [20]
 s.push(21);
 [19]
 [20]
 [21]
 s.push(22);
 [19]
 [20]
 [21]
 [22]
 s.push(23);
 [19]
 [20]
 [21]
 [22]
 [23]
 s.emplace(5); // IT WILL ADD ELEMENT AT THE last
 [5]
 [19]
 [20]
 [21]
 [22]
 [23]

 cout<<s.top();//it will print 5 becuase 5 is at top

 s.pop(); // it will remove from end like 5 
 s.size();// it tell the size of it
 s.empty(); empty the stack

 stack<int> s1,s2;
 s.swap(s2)
      */
     stack<int> s;
     s.push(19);
     s.push(20);
     s.push(21);
     s.push(22);
     s.push(23);
     s.emplace(5); // It will add 5 at the top

     cout << s.top(); // It will print 5 because 5 is at the top

     s.pop(); // It will remove the top element (5)
     cout << endl
          << s.size(); // It will print the size of the stack after popping

     // Check if the stack is empty and print the result
     cout << endl
          << s.empty(); // It will print 0 (false) because the stack is not empty yet

     cout << endl
          << s.size(); // It will print the size of the stack after calling empty()
}