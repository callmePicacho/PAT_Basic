#include<iostream>
using namespace std;
int main(){
    int n,k;
    int a[101+5]={0};
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        a[t]++;
    }
    cin>>k;
    for(int i=0;i<k;i++){
        int t;
        cin>>t;
        if(i!=0)
            cout<<" ";
        cout<<a[t];
    }
    return 0;
}