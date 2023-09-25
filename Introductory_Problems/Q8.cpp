#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&arr,int n,int sum){
    //knapsack
    //initialization
    vector<vector<int>>t(n+1,vector<int>(sum+1));
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i==0)t[i][j]=0;
            if(j==0)t[i][j]=1;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    long long sum=0;
    for(int i=0;i<n;i++){//initialized an array with natural numbers
        arr[i]=i+1;
        sum+=arr[i];
    }  
    if(sum%2==1){
        cout<<"NO SOLUTION";
        return 0;
    }
    else {
        cout<<"YES"<<endl;
        long long news=sum/2;
        vector<int>s1;
        vector<int>s2;
        for(int i=n-1;i>=0;i--){
            if(arr[i]<=news){
                s1.push_back(arr[i]);
                news-=arr[i];
            }
            else{
                s2.push_back(arr[i]);
                
            }
        }//do subsets bana liye hain
        cout<<s1.size()<<endl;
        for(int i=0;i<s1.size();i++) cout<<s1[i]<<" ";
        cout<<endl;
        cout<<s2.size()<<endl;
        for(int i=0;i<s2.size();i++) cout<<s2[i]<<" ";
    }
    return 0;
}
