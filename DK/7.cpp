#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c, delta;
    cin >> a >> b >> c;
    if (a == 0 && b == 0 && c != 0)
    {
        cout << "NO";
    }
    if (a == 0 && b == 0 && c == 0)
    {
        cout << "WOW";
    }
    if (a == 0 && b != 0 && c != 0)
    {
        cout << fixed << setprecision(2) << -c / b;
    }
    if (a == 0 && b != 0 && c == 0)
    {
        cout << fixed << setprecision(2) << 0;
    }
    if (a != 0)
    {
        delta = b * b - 4 * a * c;
        if (delta < 0)
        {
            cout << "NO";
        }
        if (delta == 0)
        {
            cout << fixed << setprecision(2) << -b / (2 * a);
        }
        if (delta > 0)
        {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            if (x1 > x2)
            {
                cout << fixed << setprecision(2) << x2 << " " << x1;
            }
            if (x1 < x2)
            {
                cout << fixed << setprecision(2) << x1 << " " << x2;
            }
        }
    }
}
