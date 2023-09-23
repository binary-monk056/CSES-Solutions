#include<bits/stdc++.h>
using namespace std;
int main(){
   long long n;
   cin>>n;
   for(long long i=1;i<=n;i++){
       long long c=i*i;
       cout<<(long long)((c*(c-1)/2)-4*(i-1)*(i-2))<<endl;
   }
   
    return 0;
}
