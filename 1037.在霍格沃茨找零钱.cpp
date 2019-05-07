#include<iostream>
using namespace std;
int main(){
    int gp,sp,kp;  //1g=17s=17*29k
    int ga,sa,ka;
    int g,s,k;
    g=s=k=0;
    scanf("%d.%d.%d",&gp,&sp,&kp);
    scanf("%d.%d.%d",&ga,&sa,&ka);
    if(gp>ga || (gp==ga && sp>sa)|| (gp==ga && sp==sa && kp>ka) ){
        cout<<'-';
        int t;
        t=gp;gp=ga;ga=t;
        t=sp;sp=sa;sa=t;
        t=kp;kp=ka;ka=t;
    }
    k=ka-kp;
    if(k<0){
        k+=29;
        s--;
    }
    s+=sa-sp;
    if(s<0){
        s+=17;
        g--;
    }
    g+=ga-gp;
    cout<<g<<"."<<s<<"."<<k;    
    return 0;
}