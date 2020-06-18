#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,cnt=0,i,j,k;
    cin>>n;
    int a[100];
    int b[101]={0};
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[a[i]]++;
    }
    for( j=1;j<=100;j++){
            if(b[j]!=0){
        if(b[j]%2!=0)b[j]--;
        cnt+=(b[j]/2);
            }
    }
    cout<<cnt<<endl;
    return 0;
}


