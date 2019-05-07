#include<iostream>
#include<map>
#include<string>
#include<math.h>
using namespace std;
int resolution[1000+5][1000+5];
int xx[]={-1,-1,-1,0,1,1,1,0};
int yy[]={-1,0,1,1,1,0,-1,-1};
int ans_col; //ÁÐ
int ans_row; //ÐÐ
int ans;
int m,n,TOL;
bool judge(int x,int y){
    for(int i=0;i<8;i++)
        if(xx[i]+x>=0 && xx[i]+x<n && y+yy[i]>=0 && y+yy[i]<m)
            if(abs(resolution[x][y]-resolution[xx[i]+x][yy[i]+y])<=TOL)
                return false;
    return true;
}
int main(){
    int t;
    int num=0;
    map<int,int> mapp;
    cin>>m>>n>>TOL;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            cin>>t;
            resolution[i][j]=t;
            mapp[resolution[i][j]]++;
        }
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(judge(i,j) && mapp[resolution[i][j]]==1){
                num++;
                ans_col = j+1;
                ans_row = i+1;
                ans = resolution[i][j];
            }
    if(num == 1)
        cout<<"("<<ans_col<<", "<<ans_row<<"): "<<ans;
    else if(num > 1)
        cout<<"Not Unique";
    else
        cout<<"Not Exist";
    return 0;
}