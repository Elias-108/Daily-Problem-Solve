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
        int fn=0,gn=0;
        for(int i=1;i<=n;i++){
           if(n%i==0){
            
            if(i%2==0){
                fn++;
            }
            else gn++;
           }
        }
       if(fn>gn)cout<<1<<endl;
       else if(gn>fn)cout<<-1<<endl;
       else cout<<0<<endl;
    }
    return 0;
}