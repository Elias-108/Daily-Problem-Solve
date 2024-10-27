#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int sz=s.size();
    if(sz==4){
        cout<<s<<endl;
    }
    else{
        for(int i=0;  i<4-sz;i++){
            cout<<0;
        }
        cout<<s<<endl;
    }
    return 0;
}