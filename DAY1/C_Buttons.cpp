#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    int mx=a+b;
    mx=max(mx,a+a-1);
    mx=max(mx,b+b-1);
    cout<<mx<<endl;
    return 0;
}