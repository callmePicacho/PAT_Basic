#include<iostream>
using namespace std;
int main(){
    int n;
    int flag=0;
    int mark[5000];
    cin>>n;
    for(int i=1;i<=100;i++){
        int t;
        cin>>t;
        mark[t]=1;
    }
    for(int i=1;i<=100;i++){
        if(mark[i]==1){
            int t=i;
            while(t!=1){
                if(t%2==0)
                    t /= 2;
                else
                    t = (t*3+1)/2;
                if(mark[t]!=0)
                    mark[t]=0;
            }
        }
    }
    for(int i=100;i>=1;i--){
        if(mark[i]==1){
            if(flag==0)
                flag=1;
            else
                cout<<" "; 
            cout<<i;
        }
    }
    return 0;
}