#include <iostream>

using namespace std;

int main()
{
    /*

    #Pairs
    it is the part of utils libaries
    now imagine i want to store a couple of integer
    How we do it

    pair<<datatypes> ,<datatypes> > <var> = {<value>,<value>}
    example
    pair<int,int> p = {1,2}

PAIR ONLY TAKE TWO THINGS

     */
    pair<int, int> p = {23,
                        23};

    // How to access the value of first value of pair
    cout << p.first << endl
         << p.second << endl;

    // we use this to store 3 times
    pair<int, pair<int, int>> np = {23,
                                    {1, 34}};

    // over her einsted of [] we use {} to create array
    //                        0          1
    pair<int, int> arr[] = {{23, 23}, {212, 12}};

    cout << np.first << endl;
    // cout << np.second << endl; we can not print pair directly
    cout << np.second.first << endl;
    cout << np.second.second << endl;
    cout << "<========================== Arrays =====================>\n";
    cout << "array 0 first " << arr[0].first << endl;
    cout << "array 0 second " << arr[0].second << endl;
    cout << "array 1 first " << arr[1].first << endl;
    cout << "array 2 first " << arr[2].second << endl;
}