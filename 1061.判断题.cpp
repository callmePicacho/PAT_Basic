#include<iostream>
using namespace std;
struct question{
    int fullScore;
    int rightAns;
};
int main(){
    int n,m;
    struct question que[100+5];
    cin>>n>>m;
    for(int i=0;i<m;i++)
        cin>>que[i].fullScore;
    for(int i=0;i<m;i++)
        cin>>que[i].rightAns;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<m;j++){
            int ans;
            cin>>ans;
            if(ans == que[j].rightAns)
                count += que[j].fullScore;
        }
        cout<<count<<endl;
    }
    return 0;
}