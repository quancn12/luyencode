#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;
    string swap = "";
    int dem = 0;
    for (int i = n.size() - 1; i >= 0; i--)
    {
        swap += n[i];
    }
    for (int i = 0; i < swap.size(); i++)
    {
        if (swap[i] == '0')
        {
            dem++;
        }
        if (swap[i] != '0')
        {
            break;
        }
        }
    swap.erase(0, dem);
    cout << swap;
}