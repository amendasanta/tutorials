#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++) 
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    int n,k,ans=0;
    cin>>n>>k;
    while(n--){
        int t,d;
        cin>>t>>d;
        while(k){
            t--,k--;
            if(t==0) break;
        }
        
            ans+=(t*d);
        
        
    }
    cout<<ans<<endl;
    }
    return 0;
}
