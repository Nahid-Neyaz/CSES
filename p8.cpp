#include<bits/stdc++.h>
using namespace std;

void solve(int n)
{
    long long sum=(n*(n+1))/2;
    vector<int>v1;
    vector<int>v2;
    vector<int>v;
    string ans;
    if(sum%2==0)
    {
        if(n%4==0)
        {
            ans="YES";
            for(int i=1;i<=n/4;i++)
            v1.push_back(i);
            for(int i=0;i<n/4;i++)
            v1.push_back(n-i+1);
            for(int i=n/4+1;i<v1.size()-1;i++)
            v2.push_back(i);
        }
        else if (n%4==3)
        {
            ans="YES";
            for(int i=4;i<=n;i++)
            v.push_back(i);
            v1.push_back(1);
            v1.push_back(2);
            v2.push_back(3);
            for(int i=0;i<=(n-3)/4;i++)
            {
                v1.push_back(v[i]);
                v1.push_back(v[v.size()-1-i]);
            }
            for(int i=4+(n-3)/4;i<n-(n-3)/4;i++)
            v2.push_back(v[i]);
        }
        else
        ans="NO";
        }
        else
        ans="NO";
        if(ans=="YES")
        {
            cout<<ans<<endl;
            cout<<v1.size()<<endl;
            for(auto it=v1.begin();it!=v1.end();it++)
            cout<<*(it)<<" ";
            cout<<endl;
            cout<<v2.size()<<endl;
            for(auto it=v2.begin();it!=v2.end();it++)
            cout<<*(it)<<" ";
            cout<<endl;
        }
        else if(ans=="NO")
        cout<<ans<<endl;

    }
int main()
{
int n;
cin>>n;
solve(n);
}