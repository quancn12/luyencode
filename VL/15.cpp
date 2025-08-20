#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b;
    cin >> a >> b;
    if (b == 0)
    {
        cout << "INVALID";
    }
    else if (a % b == 0)
    {
        cout << a / b;
        }
    else if ((a < 0 && b > 0) || (a > 0 && b < 0))
        cout << -abs(a / gcd(a, b)) << " " << abs(b / gcd(a, b));
    else if ((a > 0 && b > 0) || (a < 0 && b < 0))
        cout << abs(a / gcd(a, b)) << " " << abs(b / gcd(a, b));
}
