#include<iostream>
using namespace std;
int data[100000+5],nex[100000+5],index[100000+5];
int main(){
    int start,n,k;
    cin>>start>>n>>k;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        cin>>data[t]>>nex[t];
    }
    int h=0;
    index[h++] = start;
    while(nex[start]!=-1){
        index[h++] = nex[start];
        start = nex[start];
    }
    bool flag = false;
    for(int i=0;i<h;i++){
        if(data[index[i]]<0){
            if(flag)
                printf(" %05d\n",index[i]);
            printf("%05d %d",index[i],data[index[i]]);
            flag = true;
        }
    }
    for(int i=0;i<h;i++)
        if(data[index[i]]>=0 && data[index[i]]<=k){
            if(flag)
                printf(" %05d\n",index[i]);
            printf("%05d %d",index[i],data[index[i]]);
            flag = true;
        }
    for(int i=0;i<h;i++)
        if(data[index[i]] > k){
            if(flag)
                printf(" %05d\n",index[i]);
            printf("%05d %d",index[i],data[index[i]]);
            flag = true;
        }
    cout<<" -1";
    return 0;
}