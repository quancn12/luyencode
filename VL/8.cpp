#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long sum = 0;
    int a, b;
    cin >> a >> b;
    for (int i = a; i >= a && i <= b; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    cout << sum;
}
