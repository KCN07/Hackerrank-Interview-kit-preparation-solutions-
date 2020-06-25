#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,j,k,f=0,cnt=0;
    cin>>n;
    int a[n+5];
    for(int i=0; i<n; i++) cin>>a[i];
    for(j=0; j<n-1; j++)
    {
        f=0;
        for(k=0; k<(n-j-1); k++)
        {
           if(a[k]>a[k+1]) swap(a[k],a[k+1]),cnt++,f=1;
        }
        if(f==0)break;
    }

    cout<<"Array is sorted in "<<cnt<<" swaps."<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[n-1]<<endl;
    return 0;
}

