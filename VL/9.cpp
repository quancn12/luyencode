#include <bits/stdc++.h>
using namespace std;
double giaithua(int i)
{
    double tich = 1;
    for (int j = 1; j <= i; j++)
    {
        tich *= j;
    }
    return tich;
}
int main()
{
    double x, n;
    double sum = 0;
    cin >> x >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += pow(x, i) / giaithua(i);
    }
    cout << fixed << setprecision(2) << sum;
}
