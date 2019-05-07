#include<iostream>
#include<map>
using namespace std;
int main(){
    int n,a[10000+5]={0};
    cin>>n;
    for(int i=1;i<=n;i++){
        int t;
        cin>>t;
        t-i < 0 ? a[i-t]++ : a[t-i]++;
    }
    for(int i=n-1;i>=0;i--)
        if(a[i]>=2)
            cout<<i<<" "<<a[i]<<endl;
    return 0;
}