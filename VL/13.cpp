#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, sum = 0;
    cin >> n;
    if (n <= 0)
        cout << "NO";
    if (n > 0)
    {
        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
                sum += i;
        }
        if (sum == n)
            cout << "YES";
        else
            cout << "NO";
    }
}