#include<iostream>


using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
    {
       long long n,b,m,time=0;
        cin>>n>>b>>m;
        while(n)
        {

            if(n%2==0)
                {
                    time=time+(n/2)*m;
                    n/=2;
                }
            else
               {
                   time=time+((n+1)/2)*m;
                   n=n/2;
               }
            m*=2;
            if(n)
            time+=b;
        }
        cout<<time<<endl;
    }
	return 0;
}
