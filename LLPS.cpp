#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           string s;
           cin>>s;
           sort(s.begin(),s.end());
           for(int i=s.size()-1;i<s.size();i--)
           {
                      if(s[s.size()-1]==s[i])
                      {
                                 cout<<s[i];
                      }
                      else
                      {
                                 break;
                      }
           }
           return 0;
}
