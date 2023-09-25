#include<bits/stdc++.h>
using namespace std;
void solve(int n,int s,int h,int d){
   
    //base case
    if(n==1){
        cout<<s<<" "<<d<<endl;
        return ;
    }
    solve(n-1,s,d,h);
    cout<<s<<" "<<d<<endl;
    solve(n-1,h,s,d);
    return ;
    
}
int main(){
    int n;
    cin>>n;
    int s=1,h=2,d=3;
    cout<<pow(2,n)-1<<endl;
    solve(n,s,h,d);
    return 0;
}
