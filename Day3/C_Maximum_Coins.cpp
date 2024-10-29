#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int sum=0;

        for(int i=a;i>0;i--){
             if(b>0){
                sum+=pow(2,i);
                b--;
             }
             else{
                sum-=pow(2,i);
             } 
        }
        cout<<sum<<endl;
    }
    return 0;
}