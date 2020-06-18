#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    int a[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<n-1;j++)
    {
      if(a[j]==1)continue;
      else if(a[j+1]==0&&a[j+2]==0)j++;
      c++;
    }
    cout<<c<<endl;
}


