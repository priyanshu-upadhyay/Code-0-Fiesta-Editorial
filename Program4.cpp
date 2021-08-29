#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (n % 2 == 0)
    {
        int s1 = 0;
        for (int i = 0; i < n; i = i + 2)
        {
            s1 = s1 + v[i];
        }
        sum = s1;

        s1 = 0;

        for (int i = 1; i < n; i = i + 2)
        {
            s1 = s1 + v[i];
        }

        sum = max(sum, s1);
    }
    else
    {

        int s1 = 0;
        for (int i = 1; i < n; i = i + 2)
        {
            s1 = s1 + v[i];
        }
        sum = s1;
    }

    if (v[0] + v[n - 1] > sum)
    {
        sum = v[0] + v[n - 1];
    }

    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] + v[i] > sum)
        {
            sum = v[i - 1] + v[i];
        }
    }
    cout << sum;

    return 0;
}