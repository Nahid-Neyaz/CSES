#include <bits/stdc++.h>
using namespace std;

void solve(long long y, long long x)
{
    long long ans;
    if (y > x)
    {
        if (y % 2 == 0)
            ans = y * y - (x - 1);
        else
            ans = ((y - 1) * (y - 1) + 1) + (x - 1);
    }
    else
    {
        if (x % 2==0)
            ans = ((x - 1) * (x - 1) + 1) + (y - 1);

        else
            ans =  (x * x) - (y - 1);
           
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long y, x;
        cin >> y >> x;
        solve(y, x);
    }
}
//170550340 943050741