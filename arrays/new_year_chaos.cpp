#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,cnt,flag;
    cin>>t;
    while(t--){
           flag=0;
            cnt=0;
        cin>>n;
        int a[n+5];
        for(int j=0;j<n;j++)cin>>a[j];
        for(int i=n-1;i>=0;i--){
            if(a[i]!=(i+1)){
                if(((i-1)>=0)&& a[i-1]==(i+1)){
                    cnt++;
                    swap(a[i],a[i-1]);
                }
                else if(((i-2)>=0)&& a[i-2]==(i+1)){
                    cnt+=2;
                    a[i-2]=a[i-1];
                    a[i-1]=a[i];
                    a[i]=i+1;
                }
                else flag=1;
            }
        }
        if(flag==0)cout<<cnt<<endl;
        else cout<<"Too chaotic"<<endl;
    }
    return 0;
}
