/*
    FIND ME
*/
#include "bits/stdc++.h"
using namespace std;

void input(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int linear_search(vector<int> &arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
        {
            return 1;
        }
    }
    return -1;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    input(arr, n);
    cout << linear_search(arr, k);
    return 0;
}