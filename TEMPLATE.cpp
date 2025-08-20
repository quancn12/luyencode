#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string bin = "";
    while (n > 0)
    {
        int r = n % 2;
        bin += char(r + '0');
        n /= 2;
    }
    string swap = "";
    for (int i = bin.size() - 1; i > 0; i--)
    {
        swap += bin[i];
    }
    cout << swap;
}