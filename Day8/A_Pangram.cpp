#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int ar[26]={0};
    for(int i=0;i<n;i++){
        char ch;
        cin>>ch;
        if(ch<='Z' && ch>='A'){
            int k=ch-'A';
            
            ar[k]++;
        }
        else {
            int l=ch-'a';
            
            ar[l]++;
        }

    }
    bool fg=true;
    for(int i=0;i<26;i++){
        if(ar[i]==0){
            fg=false;
            break;
        }
    }
    if(fg)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}