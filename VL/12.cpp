#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 0)
        cout << "INF";
    if (n > 0)
    {
        for (int i = n; i > 0; i--)
        {
            if (n % i == 0)
            {
                cout << i << " ";
            }
        }
    }
    if (n < 0)
    {
        for (int i = n; i < 0; i++)
        {
            if (n % i == 0)
                cout << -i << " ";
        }
    }
}