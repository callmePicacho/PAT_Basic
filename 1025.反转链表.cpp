#include<iostream>
#include<algorithm>
using namespace std;
int dat[100005];
int nex[100005];
int lis[100005];
int main(){
    int first,n,k;
    cin>>first>>n>>k;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        cin>>dat[temp]>>nex[temp];
    }
    int sum=0;
    while(first!=-1){   //把索引数组理出来
        lis[sum++] = first;
        first = nex[first];
    }
    for(int i=0;i<sum-sum%k;i+=k)  //反转索引
        for(int j=0;j<k/2;j++){
            int t = lis[i+j];
            lis[i+j] = lis[i+k-j-1];
            lis[i+k-j-1] = t;
        }
    for(int i=0;i<sum-1;i++)
        printf("%05d %d %05d\n",lis[i],dat[lis[i]],lis[i+1]);
    printf("%05d %d -1",lis[sum-1],dat[lis[sum-1]]);
    return 0;
}