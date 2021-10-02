#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{ 
	   long int A,B,C;
        cin>>A;
        cin>>B;
        cin>>C;
        if((A>B&&B>C)||(C>B&&B>A))
            cout<<B<<endl;
        else if((B>A&&A>C)||(C>A&&A>B))
            cout<<A<<endl;
        else if((A>C&&C>B)||(B>C&&C>A))
            cout<<C<<endl;
	}
	return 0;
}
