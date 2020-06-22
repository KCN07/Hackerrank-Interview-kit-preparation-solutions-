#include<bits/stdc++.h>
using namespace std;
int mns(int a[],int n)
{
    int res=0,cs=0,j;
    pair<int,int>v[n];
    for(int i=0; i<n; i++)
    {
        v[i].first = a[i];
        v[i].second = i;
    }
    sort(v,v+n);
    vector<bool>vs(n,false);
    for(int i=0; i<n; i++)
    {
        if(vs[i]||v[i].second==i)continue;
        cs=0;
        j=i;
        while(!vs[j]){
            vs[j]=true;
            j=v[j].second;
            cs++;
        }
        if(cs>0)res+=(cs-1);
    }
    return res;

}
int main()
{
    int n;
    cin>>n;
    int a[n+5];
    for(int i=0; i<n; i++)cin>>a[i];
    cout << mns(a, n)<<endl;
    return 0;
}
