#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k,l;
        cin>>n>>k>>l;
        vector<int>v;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            if(b==l){
                v.push_back(a);
            }
        }
        if(v.size()<k){
            cout<<-1<<endl;
            continue;
        }
       sort(v.rbegin(),v.rend());
       int sum=0;
       for(int i=0;i<k&&i<v.size();i++){
          sum+=v[i];
       }
       cout<<sum<<endl;
    }
    return 0;
}