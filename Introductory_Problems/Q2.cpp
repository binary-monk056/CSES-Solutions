#include<bits/stdc++.h>
using namespace std;
int main(){
     int  n;
     cin>>n;
     long long nsum=(long long)n*(n+1)/2,sum=0;
     vector<int>v(n);
     for(int i=0;i<n;i++){
         cin>>v[i];
         sum+=(long long)v[i];
     } 
     cout<<nsum-sum;
   
    return 0;
}
