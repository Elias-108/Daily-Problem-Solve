#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,t;
    cin>>a>>b>>t;
    int c=t+0.5;
    c/=a;
    c*=b;
    cout<<c<<endl;
    return 0;
}