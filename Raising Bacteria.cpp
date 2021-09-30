#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           long long n,an=0;
           cin>>n;
           while(n){
                      if(n&1)
                      {
                         an++;
                      }
                      n>>=1;
                   }
           cout<<an<<endl;
           return 0;
}
