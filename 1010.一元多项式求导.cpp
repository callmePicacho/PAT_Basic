#include<iostream>
using namespace std;
int main(){
    int ratio;  //系数
    int index;  //指数
    char t;
    int flag=0;
    while(scanf("%d %d",&ratio,&index)==2 && scanf("%c",&t)==1){
        if(index > 0 && ratio!=0){
            if(flag==0)
                flag=1;
            else
                cout<<" ";
            cout<<ratio*index<<" "<<index-1;
        }
        if((index==1 || index==0) && ratio==0){
            if(flag==0)
                flag=1;
            else
                cout<<" ";
            cout<<0<<" "<<0;
        }
        if(t=='\n')
            break;
    }
    if(flag==0)
        cout<<"0 0";
    return 0;
}