#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long double tich = 1;
    for (int i = 1; i <= n; i++)
    {
        tich *= i;
    }
    cout << tich;
}