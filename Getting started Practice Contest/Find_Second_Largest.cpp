#include "bits/stdc++.h"
using namespace std;

int main()
{
    vector<int> inp(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> inp[i];
    }
    sort(inp.begin(), inp.end());
    cout << inp[1] << "\n";
    return 0;
}