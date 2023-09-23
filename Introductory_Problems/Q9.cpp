#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main(){
   int n;
   cin>>n;
   long long ans=1;
   while(n--){
       ans=(ans*2)%MOD;
   }
   cout<<ans;
    return 0;
}
