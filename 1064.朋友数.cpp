#include<iostream>
using namespace std;
int resolve(int x){
    int count=0;
    while(x){
        count +=x%10;
        x/=10;
    }
    return count;
}
int main(){
    int n,num=0;
    int mark[40+5]={0};
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        if(mark[resolve(t)]==0){
            mark[resolve(t)]=1;
            num++;
        }
    }
    cout<<num<<endl;
    int flag=0;
    for(int i=0;i<=40;i++)
        if(mark[i]){
            if(flag==0)
                flag=1;
            else
                cout<<" ";
            cout<<i;
        }
    return 0;
}