// Problem: B - Collatz-Conjecture
// Contest: 1982
// Language: C++17 (GCC 7-32)
// Tags: brute force, implementation, math, number theory, *1200

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      long long int x,y,k;
      cin>>x>>y>>k;
      long long int val=y-(x%y);
      while(k>=val)
      {
        k=k-val;
        x=x+val;
        while(x%y==0)
        {
          x=x/y;
        }
        val=y-(x%y);
        if(x==1)
        {
          k=k%val;
          x+=k;
          k=0;
          break;
        }
      }
      x=x+k;
      cout<<x<<endl;
    }
    return 0;
}