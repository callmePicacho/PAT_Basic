#include<iostream>
using namespace std;
int main(){
    string a,b;
    bool mark[150]={false};
    cin>>a>>b;
    for(int i=0;a[i]!='\0';i++)
        if(a[i]>='a' && a[i]<='z')
            a[i]-=32;
    for(int i=0;b[i]!='\0';i++)
        if(b[i]>='a' && b[i]<='z')
            b[i]-=32;
    for(int i=0;a[i]!='\0';i++){
        int j;
        for(j=0;b[j]!='\0';j++)
            if(a[i]==b[j])
                break;
        if(b[j]=='\0' && mark[a[i]]==false){
            cout<<a[i];
            mark[a[i]]=true;
        }
    }
    return 0;
}