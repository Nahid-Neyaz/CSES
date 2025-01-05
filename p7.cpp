#include <bits/stdc++.h>
using namespace std;

void solve(long long n)
{
    for (long long i = 1; i <= n; i++)
    {
        long long total = ((i * i) * ((i * i) - 1)) / 2;
        long long attack = 4 * (i - 1) * (i - 2);
        long long ans = total - attack;
        cout << ans << endl;
    }
}
int main()
{
    long long n;
    cin >> n;
    solve(n);
}