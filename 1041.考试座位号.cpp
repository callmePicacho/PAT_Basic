#include<iostream>
#include<string>
using namespace std;
struct data{
    string st;
    int ks;
}da[1000+5];
int main(){
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++){
        string t1;
        int t2,t3;
        cin>>t1>>t2>>t3;
        da[t2].st=t1;
        da[t2].ks=t3;
    }
    cin>>m;
    for(int i=0;i<m;i++){
        int t;
        cin>>t;
        cout<<da[t].st<<" "<<da[t].ks<<endl;
    }
    return 0;
}