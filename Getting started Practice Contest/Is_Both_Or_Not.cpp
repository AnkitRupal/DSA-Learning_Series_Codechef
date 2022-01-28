/*
    IS BOTH OR NOT
*/
#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 5 == 0)
    {
        if (n % 11 == 0)
        {
            cout << "BOTH\n";
        }
        else
        {
            cout << "ONE\n";
        }
    }
    else if (n % 11 == 0)
    {
        if (n % 5 == 0)
        {
            cout << "BOTH\n";
        }
        else
        {
            cout << "ONE\n";
        }
    }
    else
    {
        cout << "NONE\n";
    }
    return 0;
}