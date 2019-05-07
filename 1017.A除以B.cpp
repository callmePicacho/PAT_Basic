#include<iostream>
using namespace std;
int main(){
    char a[1000+5];
    int b;
    int t=0,sum=0;
    bool flag =false;
    scanf("%s %d",a,&b);
    for(int i=0;a[i]!=0;i++){
        sum = sum*10 + a[i]-'0';
        if(sum >= b){
            cout<< sum/b;
            flag = true;
        }
        else if(sum < b && flag)
            cout<<0;
        sum = sum%b;
    }
    if(!flag)
        cout<<0;
    cout<<" "<<sum;
    return 0;
}