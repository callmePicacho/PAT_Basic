#include<iostream>
using namespace std;
int main(){
    int m,n,a,b,replace,t;
    cin>>m>>n>>a>>b>>replace;
    for(int i=0;i<m;i++){
        int flag=0;
        for(int j=0;j<n;j++){
            scanf("%d",&t);
            if(flag==0)
                flag=1;
            else
                cout<<" ";
            if(t>=a && t<=b)
                printf("%03d",replace);
            else
                printf("%03d",t);
        }
        printf("\n");
    }
    return 0;
}