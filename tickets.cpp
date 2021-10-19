 
 
#include <iostream>
#include "bits/stdc++.h"

using namespace std;

int main()
{
     int t;cin>>t;
     while(t--)
     {
         string s;cin>>s;
         char x = s[0];
         char y = s[1];
         int c = 0;
         for(int i=0;i<s.size();i++)
         {
             if((i%2 == 0 && s[i] == x) ||(i%2 != 0 && s[i] == y) )
             {
                   c++;
             }
             else
             {
                 break;
             }
         }
         if(x == y)
         {
             cout<<"NO"<<"\n";
         }
         
         else
         {
             if(c == s.size())
             {
                 cout<<"YES"<<"\n";
             }
             else
             {
                 cout<<"NO"<<"\n";
             }
         }
          
     }

    return 0;
}
