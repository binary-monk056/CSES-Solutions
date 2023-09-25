#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
    unordered_map<char,int>mp;
    for(int i=0;i<n;i++)mp[s[i]]++;
    //count number of odd characters
    char c;
    int odd=0;
    for(auto it:mp){
        if(it.second%2==1) {
            c=it.first;
             odd++;
        }
       
    }
    if(n%2==0 and odd>0){
        cout<<"NO SOLUTION";
        return 0;
    }
   else  if(n%2==1 and odd>1){
        cout<<"NO SOLUTION";
        return 0;
    }
    else{
        string ans="";
        for(auto it:mp){
            for(int i=1;i<=it.second/2;i++)   ans+=it.first;
        }
        cout<<ans;
        if(n%2==1) cout<<c;
       reverse(ans.begin(),ans.end());
       cout<<ans;
    }
    return 0;
}
