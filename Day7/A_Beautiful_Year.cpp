#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    set<int>s;
    int a=++n;
    while(true){
        int x=n%10;
        
        n/=10;
        s.insert(x);
        if(n>0) continue;
        if(s.size()<4) {
            s.clear();
             a++;
             n=a;
        }
        if(s.size()==4){
             
           break;
        }
    }
    
    cout<<a<<endl;
    return 0;
}

