/*
    VALID TRIANGLE OR NOT
*/
#include "bits/stdc++.h"
using namespace std;

/*
    A triangle is formed iff side1 + side2 > base is valid for any side as base.
*/

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}