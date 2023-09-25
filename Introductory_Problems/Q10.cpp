#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
   //TRAILING ZEROS WILL BE DEFINED BY NUMBER OF 5'S
   long long ans=0,i=1;
   while(n/pow(5,i)){
       ans+=(n/pow(5,i));
       i++;
   }
   cout<<ans;
    return 0;
}
