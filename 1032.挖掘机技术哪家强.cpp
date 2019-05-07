#include<iostream>
using namespace std;
int main(){
    int n,max=0;
    int a[100000+5]={0};
    cin>>n;
    while(n--){
        int t,score;
        cin>>t>>score;
        a[t]+=score;
        if(a[max] < a[t])
            max = t;
    }
    cout<<max<<" "<<a[max];
    return 0;
}