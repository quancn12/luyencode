#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long year;
    cin >> year;
    if (year > 0 && year <= 100000)
    {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    if (year <= 0 || year > 100000)
        cout << "INVALID";
}