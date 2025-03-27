#include <iostream>
#include <vector>
using namespace std;
/*
We have to move all the zeros to end


Brute approch

I can have one temp array in whcih i can store the number of 0s and then i can add those to the existing one like

a=[1,0,34,0,6,7,0,78]

C = [0,0,0]
a= [1,34,6,7,78,7,0,78]

a.insert(a.end()-c.size(),0)



    vector<int> a = {1, 0, 34, 0, 6, 7, 0, 78};
    vector<int> b;
    int cnt = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != 0)
        {
            b.push_back(a[i]);
        }
        else
        {
            cnt++;
        }
    }

    for (int i = 0; i < cnt; i++)
    {
        b.push_back(0);
    }

    a = b;
    for (auto it : a)
    {
        cout << it << " ";
    }



    ///////////////////Optimal Solution

    Use Two pointer approch here
    use I and J over here swap two values if j is 0 and i is not 0 then swap

*/

int main()
{
    vector<int> a = {1, 0, 34, 0, 6, 7, 0, 78};
    int j = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != 0)
        {

            a[j] = a[i];
            a[i] = 0;
        }
        else
        {
            j = i;
        }
    }

    // Corrected print statement
    for (auto it : a)
    {
        cout << it << " ";
    }
}
