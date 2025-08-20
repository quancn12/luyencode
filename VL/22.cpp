#include <bits/stdc++.h>
using namespace std;
string bin(long long n)
{
    if (n == 0)
        return "0";
    int r;
    string swap1 = "";
    while (n > 0)
    {
        r = n % 2;
        swap1 += (char)(r + '0');
        n /= 2;
    }
    string swap2 = "";
    for (int i = swap1.size() - 1; i >= 0; i--)
    {
        swap2 += swap1[i];
    }
    return swap2;
}
int main()
{
    int T;
    cin >> T;
    long long a[10000];
    for (int i = 0; i < T; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < T; i++)
    {
        cout << bin(a[i]) << endl;
    }
}