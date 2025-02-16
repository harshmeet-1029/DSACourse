#include <iostream>
#include <list>
using namespace std;

int main()
{
    /*
    #Lists
It is also like vector which give you front operations as well and it is also dynamic in nature
front operations like in vector we have push_back emplace_back IN list we also haveee push_front and emplace_front

Some Basic Operations on std::list
front() – Returns the value of the first element in the list.
back() – Returns the value of the last element in the list.
push_front() – Adds a new element ‘g’ at the beginning of the list.
push_back() – Adds a new element ‘g’ at the end of the list.
pop_front() – Removes the first element of the list, and reduces the size of the list by 1.
pop_back() – Removes the last element of the list, and reduces the size of the list by 1.
insert() – Inserts new elements in the list before the element at a specified position.
size() – Returns the number of elements in the list.
begin() – begin() function returns an iterator pointing to the first element of the list.
end() – end() function returns an iterator pointing to the theoretical last element which follows the last element.



like

list<int> ls;

ls.push_back(4); // {2}
ls.emplace_back(10); //{2,10}
ls.push_front(1); //{1,2,10}
ls.emplace_front(2); // {2,1,2,10}

there are operations whicha re same like vectors
     */

    list<int> ls;
    ls.push_back(23);
    ls.push_back(24);
    ls.push_back(25);
    ls.push_back(26);
    ls.push_back(27);
    ls.push_back(28);
    for (auto i : ls)
    {
        cout << i << " ";
    }

    cout << endl
         << ls.back();
}