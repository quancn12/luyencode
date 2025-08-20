#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b;
    cin >> a >> b;
    int m = max(a, b);
    if (a != 0 && b != 0)
    {
        for (long long i = m; i <= abs(a * b); i++)
        {
            if (i % a == 0 && i % b == 0 && i != 0)
            {
                cout << i;
                break;
            }
        }
    }
    else
        cout << 0;
}