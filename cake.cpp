#include<bits/stdc++.h>

#define nl            "\n"
#define f(i,a,n)       for(int i=a;i<=n;i++)
#define rf(i,n,a)      for(int i=n;i>=0;i--)
#define ll             long long int
#define in_arr(a)      for(auto &e : a) {cin>>e;}
#define out_arr(a)     for(auto e: a)   {cout<<e<<" ";} cout<<"\n";
#define fast           ios_base::sync_with_stdio(false); cin.tie(NULL);
#define testcase       int tc; cin>>tc; while(tc--) { solve(); }

using namespace std;

void solve()
{
    string s; cin>>s;
    int l=s.size();
    int b=0;
    map<char,int> mp;
    f(i,0,l-1)
    {
    mp[s[i]]++;
    }
    for(auto i:mp)
    {
         if(i.second==l-i.second)
         {
         cout<<"YES"<<nl;
         return;
         }
    }
     cout<<"NO"<<nl;
}


main()
{
    fast
    
     testcase
    // solve();
}
