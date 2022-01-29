/*
    RANGE ODD
*/
#include "bits/stdc++.h"
using namespace std;

int main()
{
    int l, r;
    cin >> l >> r;
    while (l <= r && l % 2 == 1)
    {
        cout << l << " ";
        l += 2;
    }
    l++;
    while (l <= r && l % 2 == 1)
    {
        cout << l << " ";
        l += 2;
    }
    return 0;
}