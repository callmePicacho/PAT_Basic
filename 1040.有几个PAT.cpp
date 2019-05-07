#include<iostream>
#include<string.h>
using namespace std;
int A[100000+5]={0};
int main(){
    string a;
    int sum=0,t=0;
    cin>>a;
    for(int i=a.size()-1;i>=0;i--){
        if(a[i]=='P'){
            A[i]=A[i+1];
            sum+=A[i];
            sum%=1000000007;
        }
        else if(a[i]=='A'){
            A[i]=A[i+1]+t;
            A[i]%=1000000007;
        }
        else if(a[i]=='T'){
            t++;
            A[i]=A[i+1];
        }
    }
    cout<<sum;
    return 0;
}