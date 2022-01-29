/*
    SUM IS EVERYWHERE
*/
#include "bits/stdc++.h"
using namespace std;

/*
    FORMULA:
        SUM OF FIRST N ODD NUMBERS  = N^2
        SUM OF FIRST N EVEN NUMBERS = N*(N+1)
*/

int main()
{
    long long int n;
    cin >> n;
    cout << (n * n) << " " << (n * (n + 1)) << "\n";
    return 0;
}