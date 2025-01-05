#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(int n)
{
    vector<int> ans;
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    else if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION" << endl;
        return;
    }
    else
    {
        for (int j = 2; j <= n; j+=2)
         cout<<j<<" ";
        for (int j = 1; j<= n; j+=2)
         cout<<j<<" ";
        cout << endl;
        return;
    }
}
int main()
{
    int n;
    cin >> n;
    solve(n);
}