#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    string ss="olleh";
    for(int i=0;i<s.size();i++){
        if(s[i]==ss.back()){
           if(!ss.empty()) ss.pop_back();
           else break;
        }
    }
    if(ss.empty())cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}