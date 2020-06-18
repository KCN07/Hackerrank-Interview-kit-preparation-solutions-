
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,sum,mx,a[6][6];
    mx=-1;
    for(i=0; i<6; i++)
    {
        for(j=0; j<6; j++)
        {
            cin>>a[i][j];
        }
    }

    for(int o=0; o<=3; o++)
    {
        for(int p=0; p<=3; p++)
        {
            k=a[o][p]+a[o][p+1]+a[o][p+2];
            l=a[o+1][p+1];
            m=a[o+2][p]+a[o+2][p+1]+a[o+2][p+2];
            sum=k+l+m;

            if((o==0&&p==0)||sum>mx)
                mx=sum;

        }
    }
    cout<<mx<<endl;
    return 0;

}
