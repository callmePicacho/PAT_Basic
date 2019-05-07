#include<iostream>
#include<algorithm>
using namespace std;
int r[100000+5]={0};  //ÓÒ±ß×îÐ¡Êý
int main(){
    int n,min=1000000001,max=-1;
    int a[100000+5],b[100000+5];
    int k=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=n-1;i>=0;i--){
        if(a[i] < min){
            r[i]=a[i];
            min=a[i];
        }
        else
            r[i]=r[i+1];
    }
    for(int i=0;i<n;i++){
        if(a[i] > max)
            max = a[i];
        if(a[i]>=max && a[i]<=r[i])
            b[k++]=a[i];
    }
    sort(b,b+k);
    cout<<k<<endl;
    for(int i=0;i<k;i++){
        if(i!=0)
            cout<<" ";
        cout<<b[i];
    }
    if(!k)
        cout<<endl;
    return 0;
}