#include<bits/stdc++.h>
using namespace std;
struct pla {
   string name;
   int score;
};
bool comp(pla p1 , pla p2){
    return p1.score==p2.score && p1.name<p2.name || p1.score>p2.score;
}

vector<pla>comparator(vector<pla>pls){
    sort(pls.begin(),pls.end(),comp);
    return pls;
}
int main()
{
    int n,score;
    string name;
    vector<pla>pls;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>name>>score;
        pla p1;
        p1.name=name,p1.score=score;
        pls.push_back(p1);
    }
    vector<pla>res = comparator(pls);
    for(int i=0;i<res.size();i++) cout<<res[i].name<<" "<<res[i].score<<endl;

    return 0;

}
