#include <iostream>

using namespace std;

/*
1. Outer loops tell the number of lines
2. Inner loops focus on columns and connect them to rows
3. Print them inside the inner loop
4. Observe symetiry


 */
void pattern1(int n)
{
    /*
     * * *
     * * *
     * * *
     */

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    /*

     *
     * *
     * * *

     */

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    /*

    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
    1 2 3 4 5 6

     */

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " " << j << " ";
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    /*

    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
    6 6 6 6 6 6

     */

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " " << i << " ";
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    /*

    * * *
    * *
    *

     */

    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    /*

    1 2 3 4 5 6
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1

     */

    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << " " << j << " ";
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    /*

     *
    ***
   *****
  *******
 *********
***********

     */

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <= 2 * i; k++)
        {
            cout << "*";
        }
        for (int l = 0; l <= n - i; l++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    /*
*******
 *****
  ***
   *

     */

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <= 2 * n - (2 * i); k++)
        {
            cout << "*";
        }
        for (int l = 0; l <= i; l++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern9(int n)
{
    /*
  *
 ***
*****
*****
 ***
  *

     */

    pattern7(n);
    pattern8(n);
}

void pattern10(int n)
{
    /*
     *
     **
     ***
     ****
     *****
     ******
     *****
     ****
     ***
     **
     *

     */

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

void pattern11(int n)
{
    /*
1
01
101
0101
10101 */
    int start = 1;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

void pattern12(int n)
{
    /*
    1    1
    12  21
    123321
     */

    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        // Word
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // space
        for (int k = 1; k <= space; k++)
        {

            cout << " ";
        }
        // word
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}

void pattern13(int n)
{
    int start = 1;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << start << " ";
            start++;
        }
        cout << endl;
    }
}

void pattern14(int n)
{

    for (int i = 0; i <= n; i++)
    {
        int start = 65;
        for (int j = 0; j <= i; j++)
        {
            cout << (char)start << " ";
            start++;
        }

        cout << endl;
    }
}

void pattern15(int n)
{

    for (int i = 0; i <= n; i++)
    {
        int start = 65;
        for (int j = 0; j <= n - i; j++)
        {
            cout << (char)start << " ";
            start++;
        }

        cout << endl;
    }
}

void pattern16(int n)
{
    int start = 65;
    for (int i = 0; i <= n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << (char)start << " ";
        }
        start++;
        cout << endl;
    }
}

void pattern17(int n)
{

    /*

     A
    ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA
ABCDEFEDCBA

     */

    for (int i = 0; i <= n; i++)
    {
        int start = 65;
        for (int j = 0; j <= n - i; j++)
        {
            cout << " ";
        }

        for (int k = 0; k <= 2 * i; k++)
        {
            cout << " " << (char)start;

            if (k < i)
                start++; // Increment until the middle
            else
                start--; // Decrement after the middle
        }
        for (int j = 0; j <= n - i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

void pattern18(int n)
{

    /*

F
E F
D E F
C D E F
B C D E F
A B C D E F

     */
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j >= 0; j--)
            cout << char(65 + n - j - 1);
        cout << endl;
    }
}

void pattern19(int n)
{
    for (int i = 0; i <= n; i++)
    {
        // star
        for (int j = 0; j <= n - i; j++)
        {

            cout << "*";
        }
        // space
        for (int j = 0; j < 2 * i; j++)
        {

            cout << " ";
        }
        // star
        for (int j = 0; j <= n - i; j++)
        {

            cout << "*";
        }
        cout << endl;
    }

    int space = n + 4;
    for (int i = 0; i <= n; i++)
    {
        // star
        for (int j = 0; j <= i; j++)
        {

            cout << "*";
        }
        // space
        for (int j = 0; j <= space; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 0; j <= i; j++)
        {

            cout << "*";
        }
        space -= 2;
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the Number of rows> ";
    cin >> n;
    pattern1(n);
    cout << endl;
    pattern2(n);
    cout << endl;
    pattern3(n);
    cout << endl;
    pattern4(n);
    cout << endl;
    pattern5(n);
    cout << endl;
    pattern6(n);
    cout << endl;
    pattern7(n);
    cout << endl;
    pattern8(n);
    cout << endl;
    pattern9(n);
    cout << endl;
    pattern10(n);
    cout << endl;
    pattern11(n);
    cout << endl;
    pattern12(n);
    cout << endl;
    pattern13(n);
    cout << endl;
    pattern14(n);
    cout << endl;
    pattern15(n);
    cout << endl;
    pattern16(n);
    cout << endl;
    pattern17(n);
    cout << endl;
    pattern18(n);
    cout << endl;
    pattern19(n);

    return 0;
}