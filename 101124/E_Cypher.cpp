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
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        for(int i=0;i<n;i++){
            int tt; 
            cin>>tt;
            int nd=0,nu=0;
            for(int j=0; j<tt;j++){
                char ch;
                cin>>ch;
                if(ch=='D')nd++;
                else nu++;
            }
            if(nd>nu){
                ar[i]+=nd-nu;
                ar[i]%=10;
            }
            else{
                int dif=(nu-nd)%10;
                ar[i]-=dif;
                if(ar[i]<0)ar[i]+=10;
            }


        }
        for(int i=0;i<n;i++){
            cout<<ar[i]<<" ";
        }cout<<endl;

    }
    return 0;
}