#include<iostream>
using  namespace std;
int main(){
    long long a,da,b,db;
    long long sum1=0,sum2=0;
    cin>>a>>da>>b>>db;
    while(a!=0){
        int t=a%10;
        if(t==da)
            sum1 = sum1*10 + t;
        a/=10;
    }
    while(b!=0){
        int t=b%10;
        if(t==db)
            sum2 = sum2*10 + t;
        b/=10;
    }
    cout<<sum1+sum2;
    return 0;
}