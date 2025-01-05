#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(ll n, vector<ll> v1)
{
    ll c = 0;
    ll rem = 0;
    for (ll i = 1; i < n; i++)
    {
        if (v1[i] < v1[i - 1])
        {
            rem += abs(v1[i - 1] - v1[i]);
            v1[i] = v1[i - 1];
        }
    }
    cout << rem << endl;
}
int main()
{
    ll n;
    cin >> n;
    vector<ll> v1(n);
    for (ll i = 0; i < n; i++)
        cin >> v1[i];
    solve(n, v1);
}