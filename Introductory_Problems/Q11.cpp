#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a ,b;
        cin>>a>>b;
        long long c=a+b;
        if(c%3!=0) cout<<"NO"<<endl;
        else{
            if(a<b)swap(a,b);
            if(a<=2*b) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
