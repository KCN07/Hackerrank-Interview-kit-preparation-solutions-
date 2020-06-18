#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,l,v;
    string s;
    cin>>n>>s;
    l=0;
    v=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='U')l++;
        if(s[i]=='D')l--;
        if(l==0&&s[i]=='U')++v;
    }
    cout<<v<<endl;
    return 0;
}

