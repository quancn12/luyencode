#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i <= 3 * n + 1; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum - i;
        }
        else
            sum = sum + i;
    }
    cout << sum;
    return 0;
}