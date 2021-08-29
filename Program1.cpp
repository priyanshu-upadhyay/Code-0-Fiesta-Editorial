#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n; // Input In C++
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int f = 0; // Flag
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == i)
        {
            f = 1;
            cout << i;
            break;
        }
    }
    if (f == 0)
    {
        cout << -1;
    }

    return 0;
}