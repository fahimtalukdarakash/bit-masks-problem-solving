#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           int n,b,i;
           cin>>n;
           int a[n];
           for(int i=0;i<n;i++)
           {
                      cin>>a[i];
           }
           for(i=0;i<n-1;i++)
           {
                      a[i+1]=a[i]^a[i+1];
           }
           cout<<a[i]<<endl;
           return 0;
}
