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
        string s;
        cin>>s;
        if(n==5){
            int a[26]={0};
            for(int i=0;i<n;i++){
                if(s[i]=='t') continue;
                if(s[i]=='T'){
                    a[s[i]-'A']++;
                }
                else a[s[i]-'a']++;
            }
            if(a['T'-'A']==1 && a['i'-'a']==1 && a['m'-'a']==1 && a['u'-'a']==1 && a['r'-'a']==1){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;

        }
        else cout<<"NO"<<endl;
    }
    return 0;
}