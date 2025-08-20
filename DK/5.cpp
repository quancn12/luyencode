#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a;
    cin >> a;
    int dem = 0;
    for (int i = 0; i <= sqrt(a); i++)
    {
        if (a == (long long)i * i)
        {
            dem++;
        }
    }
    if (dem == 0)
    {
        cout << "NO";
    }
    else
        cout << "YES";
    return 0;
}
