#include<iostream>
using namespace std;
int main(){
    int n,m;
    int line;
    int flag=0;
    int a[100+5];
    cin>>n>>m;
    line = n-m%n;  
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=line;i<n;i++){
        if(flag==0)
            flag=1;
        else
            cout<<" ";
        cout<<a[i];
    }
    for(int i=0;i<line;i++){
        if(flag==0)
            flag=1;
        else
            cout<<" ";
        cout<<a[i];
    }
    return 0;
}