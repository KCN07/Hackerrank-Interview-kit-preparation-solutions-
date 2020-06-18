
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    long long n,r,p,acnt,acntx;
    cin >> n;
    r=n / s.size();
    p=n % s.size();
    acnt=count(begin(s), end(s), 'a');
    acntx=count(begin(s), begin(s) + p, 'a');
    cout<<acnt*r+acntx;
    return 0;
}

