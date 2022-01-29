/*
    ALTERNATIVE SQUARE PATTERN
*/
#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int row_count = 1; row_count <= n; row_count++)
    {
        if (row_count % 2 == 1)
        {
            for (int i = ((5 * (row_count - 1)) + 1); i <= (5 * (row_count)); i++)
            {
                cout << i << " ";
            }
        }
        else
        {
            for (int i = (5 * row_count); i >= (5 * (row_count - 1) + 1); i--)
            {
                cout << i << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}