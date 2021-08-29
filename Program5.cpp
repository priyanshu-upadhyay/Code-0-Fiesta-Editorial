#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                if (i == 0 && s[i + 1] == '0')
                {
                    c++;
                    s[i] = '1';
                }
                else if (i == n - 1 && s[i - 1] == '0')
                {
                    c++;
                    s[i] = '1';
                }
                else if (s[i - 1] == '0' && s[i + 1] == '0')
                {
                    c++;
                    s[i] = '1';
                }
            }
        }
        cout << c << "\n";
    }

    return 0;
}