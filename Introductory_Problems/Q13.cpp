#include<bits/stdc++.h>
using namespace std;
vector<string>greycode(int n){
    //recursion
    vector<string>ans;
    if(n==1){
        ans.push_back("0");
        ans.push_back("1");
        return ans;
    }
    vector<string>prev=greycode(n-1);
    int size=prev.size();
    for(int i=0;i<size;i++)  ans.push_back('0'+prev[i]); //prev[i] is individual string of the vector prev
    for(int i=size-1;i>=0;i--) ans.push_back('1'+prev[i]);
    return ans;
}
int main(){
    int n;
    cin>>n;
    //recursion
    vector<string>res=greycode(n);
    for(int i=0;i<res.size();i++) cout<<res[i]<<endl;
    return 0;
}
