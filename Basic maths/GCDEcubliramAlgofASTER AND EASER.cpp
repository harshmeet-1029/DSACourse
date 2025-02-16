#include <iostream>
#include <cmath>
#include <set>
#include <algorithm>

using namespace std;

void HCF(int n, int m)
{
    /*
    It state that to find teh gcd of any number we can use

    gcd(n,m) = gcd(n-m,m) where n>m
we have to keep on doing it until any one number becomes 0 like either n or m
liek
gcd(20,15) = gcd(5,15)
gcd(15,5) = gcd(10,5)
gcd(10,5) = (5,5)
gcd(5,5)  =  gcd(0,5)
so 5 is the gcd
BUT THIS METHOD DOES NOT IMPROEV TOO MUCH SO WHAT WE CAN DO IS

gcd(a,b) = gcd(a%b,b) where a>b

gcd(20,15) = gcd(5,15)
gcd(15,5) = gcd(0,15)
so it reduce the time by half
     */

    // tc o(LOG ɵ min(a,b))
    while (n > 0 && m > 0)
    {
        if (n > m)
            n = n % m;
        else
            m = m % n;
    }
    if (n == 0)
        cout << m;
    else
        cout << n;
}
int main()
{
    HCF(100000, 2000000000000000);
}