#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           int l,r,i,j,n;
           vector<int> v;
           cin>>l>>r;
           for(i=l;i<=r;i++)
           {
                      for(j=l;j<=r;j++)
                      {
                         n=i^j;
                         v.push_back(n);
                      }
           }
           int a=*max_element(v.begin(),v.end());
           cout<<a<<endl;
           return 0;
}
