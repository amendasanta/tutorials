#include<bits/stdc++.h>

using namespace std;

#define ll long long

#define mod 1000000007

ll binpow(ll a,ll b){

    a %= mod;

    ll res = 1;

    while (b > 0) {

        if (b & 1)

            res = res * a % mod;

        a = a * a % mod;

        b >>= 1;

    }

    return res;

}

int main(){

  ll t;

  cin>>t;

  while(t--){

    ll n,k,x,y;

    cin>>n>>k>>x>>y;

    bool arr[n]={0};

    arr[x]=true;

    int f=1;

    int p=(x+k)%n; 

    while(f!=n&&arr[p]!=true){

      arr[p]=true;

      if(arr[y])

        break;

      p=(p+k)%n;

    }

    if(arr[y]){

      cout<<"YES\n";

    }

    else{

      cout<<"NO\n";

    }

  }

  return 0;

}
