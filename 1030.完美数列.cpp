#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long n,p;
    long a[100000+5];
    int num=0;
    cin>>n>>p;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);  //Ä¬ÈÏÉıĞò
    for(int i=0;i<n;i++)
        for(int j=i+num;j<n;j++){
            if(a[i]*p<a[j])
                break;
            if(num < j-i+1)
                num =j-i+1;
        }
    cout<<num;
    return 0;
}