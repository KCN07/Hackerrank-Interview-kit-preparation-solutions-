#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,c,e;
    cin>>n>>d;
    list<int>a;
    list <int> :: iterator it;
    for(int i=0;i<n;i++){
        cin>>c;
            a.push_back(c);
    }
    for(int j=0;j<d;j++ )
    {
        e=a.front();
        a.pop_front();
        a.push_back(e);
    }
    for(it = a.begin(); it != a.end(); ++it)
        cout << *it<<" ";
    cout<<endl;
    return 0;

}


