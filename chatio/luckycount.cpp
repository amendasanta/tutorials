#include "bits/stdc++.h"
using namespace std;
using ll = long long int;
const ll mod = 1000000007;
const ll M = 1000000000000000000ll;
#define fi first
#define se second
#define pb push_back
inline ll add(ll a,ll b){return ((a%mod+b%mod)%mod);}
inline ll sub(ll a,ll b){return ((a%mod-b%mod+mod)%mod);}
inline ll mult(ll a,ll b){return (((a%mod)*(b%mod))%mod);}
inline ll power(ll n,ll x){ll p=1;while(x!=0){if(x%2==0){n=mult(n,n);x=x/2;}p=mult(p,n);x--;}return p;}
inline ll recurmult(ll a,ll b){ll r = 0;while (b){if (b & 1)r = add(r, a);a = mult(2,a);b >>= 1;}return r%mod;}
ll get_val(ll x)
{
    ll s=0;
    while(x!=0)
        {
            ll rem=x%10;
            if(rem==7)
                s+=1;
            else if(rem==4)
                s-=1;
            x=x/10;
        }
        return s;
}
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);   
    #ifndef ONLINE_JUDGE   
    freopen("input.txt", "r", stdin);   
    freopen("output.txt", "w", stdout);
    #endif  
    ll n=100000,s=0;
    unordered_map<ll,ll>mp;
    s=0;
    ll ans[n+2]={0};
    mp[0]=1;
    for(ll i=1;i<=n;i++)
    {
    	s+=get_val(i);
    	ans[i]=ans[i-1]+mp[s];
    	mp[s]++;
    	//cout<<i<<" "<<ans[i]<<"\n";
    }
    ll t;
    cin>>t;
    while(t--)
    {
    	ll x;
    	cin>>x;
    	cout<<ans[x]<<"\n";
    }
}
