#include<iostream>
using namespace std;
int main(){
    int row[50]={1};
    int n,line=0;
    char c;
    scanf("%d %c",&n,&c);
    while(row[line]<=n){
        line++;
        row[line] = row[line-1] + (line*2+1)*2;
    }
    for(int i=0;i<line;i++){
        for(int j=0;j<i;j++)
            cout<<" ";
        for(int j=0;j<line*2-1-2*i;j++)
            cout<<c;
        cout<<endl;
    }
    for(int i=line-2;i>=0;i--){
        for(int j=0;j<i;j++)
            cout<<" ";
        for(int j=0;j<line*2-1-2*i;j++)
            cout<<c;
        cout<<endl;
    }
    cout<<n-row[line-1];
    return 0;
}