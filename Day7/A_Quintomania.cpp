#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n;i++){
        cin>>a[i];
    }
    bool fg=true;
    for(int i=0; i<n-1;i++){
     
        int x=abs(a[i]-a[i+1]);
       // cout<<x<<" ";
        if(x!=5 && x!=7){
           // cout<<"NO"<<endl;
            fg=false ; break;
        }
        
    }
    if(fg)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }

    return 0;
}