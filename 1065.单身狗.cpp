#include<iostream>
using namespace std;
int couple[100000+50]={0};
int single[100000+50]={0};
int main(){
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++){
        int t1,t2;
        cin>>t1>>t2;
        couple[t1]=t2;
        couple[t2]=t1;
    }
    cin>>m;
    for(int i=0;i<m;i++){
        int t;
        cin>>t;
        single[t]=1;
    }
    for(int i=0;i<100000;i++)
        if(single[i] && single[couple[i]]){
            m-=2;
            single[i]=0;
            single[couple[i]]=0;
        }
    cout<<m<<endl;
    int flag=0;
    for(int i=0;i<100000;i++){
        if(single[i]){
            if(flag==0)
                flag=1;
            else
                cout<<" ";
            printf("%05d",i);
        }
    }
    return 0;
}