#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int cc=c;
    while(1){
        if(cc>=a && cc<=b){
            cout<<cc<<endl;
            break;
        }
        if(cc>b){
            cout<<-1<<endl;
            break;
        }
        cc=cc+c;
    }
    return 0;
}