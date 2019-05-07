#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        count += (n-1)*t*10;
        count += (n-1)*t;
    }
    cout<<count;
    return 0;
}