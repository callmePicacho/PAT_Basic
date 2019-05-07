#include<iostream>
using namespace std;
int main(){
    int n;
    double a1,a2,a3,a4,a5;
    int fh=1;
    int num=0;
    int flag=0;
    a1=a2=a3=a4=a5=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        if(t%5==0 && t%2==0)
            a1 += t;
        else if(t%5==1){
            flag=1;
            a2 += t*fh;
            fh = -fh;
        }
        else if(t%5==2)
            a3++;
        else if(t%5==3){
            num++;
            a4 += t;
        }
        else if(t%5==4){
            if(a5 < t)
                a5 =t;
        }
    }
    a4 /=num;
    if(a1!=0)
        cout<<a1;
    else
        cout<<"N";
    cout<<" ";
    if(flag)
        cout<<a2;
    else 
        cout<<"N";
    cout<<" ";
    if(a3!=0)
        cout<<a3;
    else
        cout<<"N";
    cout<<" ";
    if(num!=0)
        printf("%.1lf",a4);
    else
        cout<<"N";
    cout<<" ";
    if(a5!=0)
        cout<<a5;
    else
        cout<<"N";
    return 0;
}