#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += i;
        if (sum > N)
        {
            cout << i - 1;
            break;
        }
    }
}