#include <bits/stdc++.h>
using namespace std;
bool prime(long long a)
{
    if (a < 2)
        return 0;
    if (a == 2 || a == 3)
        return 1;
    if (a >= 5)
    {
        for (int i = 2; i * i <= a; i += 1)
        {
            if (a % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    if (prime(n) == 1)
        cout << "YES";
    else
        cout << "NO";
}