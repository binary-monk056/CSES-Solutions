#include<bits/stdc++.h>
using namespace std;
void divi(int i,int n,long long s1,long long s2,vector<long long>&arr,long long &mini){
    if(i==n){
        mini=min(mini,abs(s1-s2));
        return ;
    }
    //when element at ith index adds to sum1
    divi(i+1,n,s1+arr[i],s2,arr,mini);
    //when element at ith index adds to sum1-sum2
    divi(i+1,n,s1,s2+arr[i],arr,mini);
    
}
void solve(){
   long long n;
    cin>>n;
    vector<long long>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    long long mini=LONG_LONG_MAX;
    divi(0,n,0,0,arr,mini);//this function will store mini diff in mini
    cout<<mini;
    
}
int main(){
  solve();
}
