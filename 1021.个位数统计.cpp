#include<iostream>
using namespace std;
int main(){
    string a;
    int mark[10]={0};
    cin>>a;
    for(int i=0;a[i]!=0;i++)
        mark[a[i]-'0']++;
    for(int i=0;i<10;i++)
        if(mark[i])
            cout<<i<<":"<<mark[i]<<endl;
    return 0;
}