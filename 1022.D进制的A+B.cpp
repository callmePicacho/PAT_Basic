#include<iostream>
using namespace std;
int main(){
    int a,b,d,sum=0;
    int k=0;
    char c[60+2];
    cin>>a>>b>>d;
    sum=a+b;
    if(sum==0){
        cout<<0;
        return 0;
    }
    while(sum!=0){
        c[k++] = sum%d + '0';
        sum/=d;
    }
    c[k]='\0';
    for(int i=k-1;i>=0;i--)
        cout<<c[i];
    return 0;
}