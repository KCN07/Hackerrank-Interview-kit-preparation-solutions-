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

in hackerrank
#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

struct Player {
    int score;
    string name;
};
class Checker{
public:

    static int comparator(Player a, Player b)  {
     if(a.score==b.score){
         if(a.name==b.name)return 0;
         else if(a.name>b.name)return -1;
         else if(a.name<b.name)return 1;
     }
     else if(a.score>b.score) return 1;
     else if(a.score<b.score)return -1;
     return 0;
    }
};
bool compare(Player a, Player b) {
    if(Checker::comparator(a,b) == -1)
        return false;
    return true;
}
int main()
{
    int n;
    cin >> n;
    vector< Player > players;
    string name;
    int score;
    for(int i = 0; i < n; i++){
        cin >> name >> score;
        Player player;
        player.name = name, player.score = score;
        players.push_back(player);
    }
    sort(players.begin(), players.end(), compare);
    for(int i = 0; i < players.size(); i++) {
        cout << players[i].name << " " << players[i].score << endl;
    }
    return 0;
}
