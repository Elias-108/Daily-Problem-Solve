#include<bits/stdc++.h>
using namespace std;

vector<int>v={4,7,44,47,74,444,447,477,474,744,774,777};

bool isAlmostLucky(int n){
    for(int val:v){
        if(n%val==0) return true;
    }
    return false;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    if(isAlmostLucky(n))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}