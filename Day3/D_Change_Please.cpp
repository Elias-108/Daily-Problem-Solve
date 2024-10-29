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
        int due=100-n;
        due=due/10;
        due*=10;
        cout<<due<<endl;
    }
    return 0;
}