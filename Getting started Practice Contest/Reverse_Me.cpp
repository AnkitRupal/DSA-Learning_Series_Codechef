/*
    REVERSE ME
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

void print_reverse(vector<int> arr)
{
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    input(arr, n);
    print_reverse(arr);
    return 0;
}