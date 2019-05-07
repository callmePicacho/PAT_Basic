#include<iostream>
using namespace std;
int main(){
    int mark[150]={0};
    int sum1=0,sum2=0;
    string a,b;
    bool flag=true;
    cin>>a>>b;
    for(int i=0;a[i]!='\0';i++){
        mark[a[i]]++;
        sum1++;
    }
    for(int i=0;b[i]!='\0';i++){
        if(mark[b[i]]!=0){
            mark[b[i]]--;
            sum1--;
        }
        else{
            flag=false;
            sum2++;
        }
    }
    if(flag)
        cout<<"Yes "<<sum1;
    else 
        cout<<"No "<<sum2;
    return 0;
}