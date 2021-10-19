#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,count=0;
	    cin>>n;
	    char ch[n];
	    for(int i=0;i<n;i++){
	        cin>>ch[i];
	    }
	    for(int i=0;i<n;i++){
	        if(ch[i]=='I'){
	            cout<<"INDIAN"<<endl;
	            break;
	        }
	        else{
	            if(ch[i]=='Y'){
	                cout<<"NOT INDIAN"<<endl;
	                break;
	            }
	            else{
	                count++;
	            }
	        }
	    }
	    if(count==n)
	       cout<<"NOT SURE"<<endl;
	}
}
