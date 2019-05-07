#include<iostream>
#include<string.h>
using namespace std;
char day[ ][4]={{"MON"},{"TUE"},{"WED"},{"THU"},{"FRI"},{"SAT"},{"SUN"}};
int main(){
    string a[4];
    bool flag = false;
    for(int i=0;i<4;i++)
        cin>>a[i];
    for(int i=0;i<( a[0].size()<a[1].size() ? a[0].size():a[1].size() );i++){
        if(flag == false && a[0][i]==a[1][i] && a[0][i]>='A' && a[0][i]<='G'){
            cout<<day[a[0][i]-'A']<<" ";
            flag = true;
        }
        else if(flag == true && a[0][i]==a[1][i]){
            if(a[0][i]>='0' && a[0][i]<='9'){
                cout<<"0"<<a[0][i];
                break;
            }
            else if(a[0][i]>='A' && a[0][i]<='N'){
                cout<<(a[0][i]-'A')+10;
                break;
            }
        }
    }
    for(int i=0;i<( a[2].size()<a[3].size() ?  a[2].size():a[3].size());i++){
        if(a[2][i]==a[3][i] && ( (a[2][i]>='a' && a[2][i]<='z') || (a[2][i]>='A' && a[2][i]<='Z') )){
            cout<<":";
            if(i<10)
                cout<<0<<i;
            else
                cout<<i;
            break;
        }
    }
    return 0;
}