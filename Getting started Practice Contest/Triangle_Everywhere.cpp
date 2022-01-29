/*
    TRAINGLE EVERYWHERE
*/
#include "bits/stdc++.h"
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (!(a + b > c && b + c > a && c + a > b))
    {
        cout << "-1\n";
    }
    else if (a == b && a == c)
    {
        cout << "1\n";
    }
    else if (a == b || b == c || a == c)
    {
        cout << "2\n";
    }
    else
    {
        cout << "3\n";
    }
    return 0;
}