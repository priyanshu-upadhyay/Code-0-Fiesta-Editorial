#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int completeWeeks = n / 7;
    int DaysInCompleteWeeks = n % 7;
    int min = 0, max = 2;
    if (DaysInCompleteWeeks <= 2)
    {
        max = DaysInCompleteWeeks;
    }
    else if (DaysInCompleteWeeks > 5)
    {
        min = DaysInCompleteWeeks - 5;
    }

    max = max + 2 * completeWeeks;
    min = min + 2 * completeWeeks;
    cout << min << " " << max;

    return 0;
}