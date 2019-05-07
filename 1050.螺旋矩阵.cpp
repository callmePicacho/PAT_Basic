#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
bool com(int a,int b){
    return a>b;
}
int main(){
    int N,m,n;
    int a[10000+5],b[10000+5];
    int k=0;
    cin>>N;
    for(int i=sqrt((double)N);i>=0;i--)
        if(N%i==0){
            n=i;
            break;
        }
    m=N/n;  //m––n¡–
    for(int i=0;i<N;i++)
        cin>>a[i];
    sort(a,a+N,com);
    int mm=m,nn=n;
    int top=0,foot=1;
    while(k<=N-1){
        for(int i=top;i<n;i++)
            b[nn*top+i]=a[k++];
        if(k>=N)
            break;
        for(int i=foot;i<m;i++)
            b[i*nn+n-1]=a[k++];
        if(k>=N)
            break;
        for(int i=n-2;i>=top;i--)
            b[(m-1)*nn+i]=a[k++];
        if(k>=N)
            break;
        for(int i=m-2;i>=foot;i--)
            b[i*nn+top]=a[k++];
        m--;
        n--;
        top++;
        foot++;
    }
    int h=0;
    for(int i=0;i<mm;i++){
        for(int j=0;j<nn;j++){
            if(j!=0)
                cout<<" ";
            cout<<b[h++];
        }
        cout<<endl;
    }
    return 0;
}