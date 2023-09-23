#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int ans=INT_MIN; //LENGTH OF LONGEST SUBSTRING WITH UNIQUE CHARACTERS
    int i=0,j=0;
    unordered_map<char,int>mp;
    while(j<s.size()){
        mp[s[j]]++;
        if(mp.size()==1){
            ans=max(ans,j-i+1);
            j++;
        }
        else if(mp.size()>1){
            while(mp.size()>1){
                mp[s[i]]--;
                if(mp[s[i]]==0) mp.erase(s[i]);
                i++;
            }
            j++;
        }
    }
    cout<<ans;
    return 0;
}
