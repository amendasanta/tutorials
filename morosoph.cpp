#include "bits/stdc++.h"
#define l long
#define ll long long
#define vl vector<long>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvl vector<vector<long>>
#define pb(a) push_back(a)
#define fri(a,b) for(l i=a;i<b;i++)
#define frj(a,b) for(l j=a;j<b;j++)
#define frii(a,b) for(l i=a;i<=b;i++)
#define frjj(a,b) for(l j=a;j<=b;j++)
#define max 500005
using namespace std;

vector<int>vec[max];
vector<ll>value(max);
vector<l>xormin(max);
vector<l>xormax(max);
vector<bool>isleaf(max,false);

void dfs(int node,int par,l xmax,l xmin)
{
  xormax[node]=xmax^(1<<value[node]);
  xormin[node]=xmin^(1<<(value[node]-1));
  for(auto child:vec[node])
  {
    if(child!=par)
      dfs(child,node,xormax[node],xormin[node]);
  }
}

int main()
{

  int t;
  cin>>t;
  while(t--)
  {
    l n;
    ll k;
    cin>>n>>k;
    fri(0,n-1)
    {
      int u,v;
      cin>>u>>v;
      vec[u].pb(v);
      vec[v].pb(u);
    }
    fri(1,n+1)
      cin>>value[i];
    dfs(1,-1,0,0);
    fri(2,n+1)
    {
      if(vec[i].size()==1)
        isleaf[i]=true;
    }
    bool flag=false;
    fri(1,n+1)
    {
      if(isleaf[i])
      {
        if(k>=xormin[i] && k<=xormax[i])
          { //cout<<"possible for leaf:"<<i<<endl;
            flag=true;break;}
      }
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    /*fri(1,n+1)
      cout<<"i:"<<i<<" xormax:"<<xormax[i]<<" xormin:"<<xormin[i]<<endl;*/
  }
  return 0;
}
