#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1;
        return 0;
    }
    if(n==2 or n==3){
       cout<<"NO SOLUTION";
       return 0;
    } 
    if(n==4){
        cout<<3<<" "<<1<<" "<<4<<" "<<2;
        return 0;
    } 
    int arr[n];
    for(int i=0;i<n;i++) arr[i]=i+1;
    int ans[n];
    int j=0;
    for(int i=n-1;i>=0;i-=2){
        ans[j++]=arr[i];
    }
    for(int i=n-2;i>=0;i-=2){
        ans[j++]=arr[i];
    }  
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
    return 0;
}
