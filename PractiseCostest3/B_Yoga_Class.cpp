#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a%2==0){
            cout<<max(a*b,a*c/2)<<endl;
        }
        else {
            cout<<max(a*b,(a/2)*c+b)<<endl;
        }
    }
    return 0;
}