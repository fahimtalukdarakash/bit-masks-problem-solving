#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           int t,i,j;
           cin>>t;
           string s1,s2;
           while(t--)
           {
                      cin>>s1;
                      cin>>s2;
                      reverse(s1.begin(),s1.end());
                      reverse(s2.begin(),s2.end());
                      int mv=0;
                      for(i=0;i<s2.size();i++)
                      {
                                 if(s2[i]=='1')
                                 {
                                            for(j=i;j<s1.size();j++)
                                            {
                                                       if(s1[j]=='1')
                                                       {
                                                                  mv=j-i;
                                                                  break;
                                                       }
                                            }
                                            break;
                                 }
                      }
                      cout<<mv<<endl;
           }
           return 0;
}
