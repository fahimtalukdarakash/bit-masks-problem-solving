#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           long long n,count=0,a;
           cin>>n;
           n--;
        while(n) {
            n &= (n-1);
            count++;
        }

        if(count & 1) {
            printf("Louise\n");
        }
        else {
            printf("Richard\n");
        }
           return 0;
}
