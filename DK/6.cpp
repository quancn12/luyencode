#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b;
    cin >> a >> b;
    if (a == 0 && b == 0)
    {
        cout << "WOW";
    }
    if (a == 0 && b != 0)
    {
        cout << "NO";
    }
    if (a != 0)
        cout << fixed << setprecision(2) << -b / a;
}
