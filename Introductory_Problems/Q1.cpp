#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n%2==0){
            n/=2;
            cout<<n<<" ";
        }
        else if(n%2==1){
            n=3*n+1;
            cout<<n<<" ";
        }
    }
    return 0;
}
