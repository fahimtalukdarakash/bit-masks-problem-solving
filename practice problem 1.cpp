#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           int a,b,i,count1=0,n;
           cin>>a>>b;
           for(i=a;i<=b;i++)
           {
                      n=i;
                      while(n>0)
                      {
                                 count1+=(n&1);
                                 n=n>>1;
                      }
           }
           cout<<count1<<endl;
           return 0;
}
