#include<bits/stdc++.h>
using namespace std;
long long int c[10000000]={0};
int main(){
long long int n,m,a,b,k,mx=0,ps=0,i;
cin>>n>>m;
//long long int c[n+1]={0};
for( i=0;i<m;i++){
    cin>>a>>b>>k;
    c[a]+=k;
    if((b+1)<=n)c[b+1]-=k;
}
for( i=1;i<=n;i++){
    ps+=c[i];
    if(ps>mx)mx=ps;
}
cout<<mx<<endl;
return 0;
}
