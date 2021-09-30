#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           long long t,n,a;
           cin>>t;
           while(t--)
           {
                      cin>>n;
                      while(n)
                      {
                                 a=n-1;
                                 n=n&(n-1);
                      }
                      cout<<a<<endl;
           }
           return 0;
}
