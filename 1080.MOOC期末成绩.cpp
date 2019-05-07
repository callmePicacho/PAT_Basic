#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
struct node{
    string name;
    int coding,mid,ter,all;
};
bool com(node a,node b){
    return a.all != b.all ? a.all > b.all : a.name < b.name;
}
map<string,int> idx;
int main(){
    int p,m,n;
    int k=1;
    string s;
    int score;
    cin>>p>>m>>n;
    vector<node>v,ans;
    for(int i=0;i<p;i++){
        cin>>s>>score;
        if(score >=200){
            node t;
            t.name = s;
            t.coding = score;
            t.ter = -1;
            t.mid = -1;
            t.all = 0;
            v.push_back(t);
            idx[s] = k++;
        }
    }
    for(int i=0;i<m;i++){
        cin>>s>>score;
        if(idx[s] != 0)
            v[idx[s]-1 ].mid = score;
    }
    for(int i=0;i<n;i++){
        cin>>s>>score;
        if(idx[s] != 0){
            int temp = idx[s]-1;
            v[temp].ter = v[temp].all = score;
            if(v[temp].mid > v[temp].ter)
                v[temp].all = int(v[temp].mid * 0.4 + v[temp].ter * 0.6 +0.5);
        }
    }
    for(int i=0;i<v.size();i++)
        if(v[i].all >= 60)
            ans.push_back(v[i]);
    sort(ans.begin(),ans.end(),com);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i].name<<" "<<ans[i].coding<<" "<<ans[i].mid<<" "<<ans[i].ter<<" "<<ans[i].all<<endl;
    return 0;
}