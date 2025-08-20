#include <bits/stdc++.h>
using namespace std;
double giaithua(int n)
{
    double tich = 1;
    for (int i = 1; i <= n; i++)
    {
        tich *= i;
    }

    return tich;
}
int main()
{
    int n1, k;
    cin >> n1 >> k;
    if (k <= n1 && k >= 1 && n1 <= 25)
        cout << giaithua(n1) / (giaithua(k) * giaithua(n1 - k));
}