#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int a[100000+50]={0};
bool com(int a,int b){
    return a > b;
}
int main(){
    int n,max=0;
    int i;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n,com);
    for(i=0;i<n;i++)
        if(a[i] <= i+1)
            break;
    cout<<i;
    return 0;
}
