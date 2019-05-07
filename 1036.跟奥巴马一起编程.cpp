#include<iostream>
using namespace std;
int main(){
    int n;
    char c;
    scanf("%d %c",&n,&c);
    for(int i=0;i<(n+1)/2;i++){
        if(i==0 || i==(n+1)/2-1)
            for(int j=0;j<n;j++)
                cout<<c;
        else{
            cout<<c;
            for(int j=1;j<n-1;j++)
                cout<<" ";
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
}