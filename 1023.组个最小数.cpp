#include<iostream>
using namespace std;
int main(){
    int mark[10]={0};
    for(int i=0;i<10;i++)
        cin>>mark[i];
    for(int i=1;i<10;i++)
        if(mark[i]!=0){
            cout<<i;
            mark[i]--;
            break;
        }
    for(int i=0;i<10;i++)
        for(int j=0;j<mark[i];j++)
            cout<<i;
    return 0;
}