#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (b - a > 3)
    {
        for (int i = b; i > a; i--)
        {
            if (i < b && i % 3 == 0 && a <= b)
            {
                cout << i << " ";
            }
        }
    }
    else
        cout << "NOT FOUND";
}