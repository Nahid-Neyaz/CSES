#include<bits/stdc++.h>
using namespace std;





void solve(long long n, vector<long long>v1)
{
 long long sum=n*(n+1)/2;
 long long s=0;
 for(long long i=0;i<n-1;i++)
 s+=v1[i];
 long long ans=sum-s;
 cout<<ans<<endl;
}
int main()
{
long long  n;
cin>>n;
vector<long long>v1(n-1);
for(int i=0;i<n-1;i++)
cin>>v1[i];
solve(n,v1);
}