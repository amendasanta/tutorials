#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	for(int j=0;j<t;j++)
	{
	    int d=0,c=0;
	    string s;
	    cin>>s;
	    
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]=='a')
	        {
	            c=c+1;
	        }
	        else
	        {
	            d=d+1;
	        }
	    }
	    if(c>d)
	    {
	        cout<<d<<endl;
	    }
	    else
	    {
	        cout<<c<<endl;
	    }
	}
	return 0;
}
