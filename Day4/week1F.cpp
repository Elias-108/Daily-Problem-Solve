#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int ar[26]={0};
    for(int i=0; i<s.size();i++){
        ar[s[i]-'a']++;
    }
    int j=0;
    for(; j<26;j++){
        if(ar[j]==0){
            char ch=j+'a';
            cout<<ch<<endl;
            break;
        }
        
    }
    if(j==26)cout<<"None"<<endl;
    return 0;
}