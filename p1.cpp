#include<bits/stdc++.h>
using namespace std;





void solve(long long n)
{
    vector<long long>ans;
    ans.push_back(n);
  while(n!=1)
  {
    if(n%2==0)
    {
        n=n/2;
    ans.push_back(n);
    }
    else 
    {
        n=n*3+1;
        ans.push_back(n);
    }
}
for(auto it:ans)
cout<<(it)<<endl;
}
int main()
{
long long n;
cin>>n;
solve(n);
}