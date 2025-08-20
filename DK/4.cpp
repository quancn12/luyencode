#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a;
    cin >> a;

    if (a >= 0)
    {
        if (a - (int)a >= 0.5)
        {
            cout << (int)a + 1;
        }
        else
            cout << (int)a;
    }
    else
    {
        if (a - (int)a <= -0.5)
        {
            cout << (int)a - 1;
        }
        else
            cout << (int)a;
    }
}