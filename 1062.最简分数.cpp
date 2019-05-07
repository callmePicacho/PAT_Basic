#include<iostream>
using namespace std;
int gcd(int a,int b){
    return b==0 ? a:gcd(b,a%b);
}
int main(){
    int n1,m1,n2,m2,k;
    scanf("%d/%d %d/%d %d",&n1,&m1,&n2,&m2,&k);
    double tmp1 = (double)n1/m1;
    double tmp2 = (double)n2/m2;
    if(tmp1 > tmp2){
        double t=tmp1;tmp1=tmp2;tmp2=t;
    }
    int flag=0;
    for(int i=1;i<k;i++){
        double tmp = (double)i/k;
        if(tmp > tmp1 && tmp < tmp2 && gcd(i,k)==1){
            if(flag==0)
                flag=1;
            else
                cout<<" ";
            cout<<i<<"/"<<k;
        }
    }
    return 0;
}