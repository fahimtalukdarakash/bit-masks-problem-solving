#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           long long t,a,b;
           cin>>t;
           while(t--)
           {
                      cin>>a>>b;
                      cout<<(a^(a&b))+(b^(a&b))<<endl;
           }
           return 0;
}
