#include<iostream>
using namespace std;
int main(){
    int mark[150]={0};
    char t;
    while(scanf("%c",&t)==1 && t!='\n'){
        if(t=='+')
            for(int i='A';i<='Z';i++)
                mark[i]=1;
        else if(t>='A' && t<='Z')
            mark[t+32]=1;
        mark[t]=1;
    }
    bool flag=false;
    while(scanf("%c",&t)==1 && t!='\n'){
        if(!mark[t]){
            cout<<t;
            flag=true;
        }
    }
    if(!flag)
        cout<<endl;
    return 0;
}