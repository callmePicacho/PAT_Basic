#include<iostream>
using namespace std;
bool judge(int x){
    for(int i=2;i*i<=x;i++)
        if(x%i==0)
            return false;
    return true;
}
int main(){
    int n,k;
    int mark[10000+5]={0};
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        if(i==0)
            mark[t]=i+1+10000;
        else
            mark[t]=i+1;
    }
    cin>>k;
    for(int i=0;i<k;i++){
        int t;
        cin>>t;
        if(mark[t]!=0){
            if(mark[t]==-1)
                printf("%04d: Checked\n",t);
            else{
                if(mark[t]>10000)
                    printf("%04d: Mystery Award\n",t);
                else if(judge(mark[t]))
                    printf("%04d: Minion\n",t);
                else
                    printf("%04d: Chocolate\n",t);
                mark[t]=-1;
            }
        }else{
            printf("%04d: Are you kidding?\n",t);
        }
    }
    return 0;
}