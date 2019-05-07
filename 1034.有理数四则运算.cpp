#include<iostream>
using namespace std;
int gcd(long long a,long long b){
    return b==0 ? a : gcd(b,a%b);
}
void number(long long a,long long b){
    if(a<0){
        cout<<'(';
        int fh=1;
        if(a/b!=0){
            cout<<a/b;
            fh=-1;
        }
        if(a/b!=0 && a%b!=0)
            cout<<" ";
        if(a%b!=0)
            cout<<fh*a%b/gcd(-a,b)<<"/"<<b/gcd(-a,b);
        cout<<')';
    }
    else if(a==0)
        cout<<0;
    else if(a>0){
        if(a/b!=0)
            cout<<a/b;
        if(a/b!=0 && a%b!=0)
            cout<<" ";
        if(a%b!=0)
            cout<<a%b/gcd(a,b)<<"/"<<b/gcd(a,b);
    }
}
void add(long long a1,long long b1,long long a2,long long b2){
    number(a1,b1);
    cout<<" + ";
    number(a2,b2);
    cout<<" = ";
    number(a1*b2+a2*b1,b1*b2);
    cout<<endl;
}
void sub(long long a1,long long b1,long long a2,long long b2){
    number(a1,b1);
    cout<<" - ";
    number(a2,b2);
    cout<<" = ";
    number(a1*b2-a2*b1,b1*b2);
    cout<<endl;
}
void mul(long long a1,long long b1,long long a2,long long b2){
    number(a1,b1);
    cout<<" * ";
    number(a2,b2);
    cout<<" = ";
    number(a1*a2,b1*b2);
    cout<<endl;
}
void div(long long a1,long long b1,long long a2,long long b2){
    number(a1,b1);
    cout<<" / ";
    number(a2,b2);
    cout<<" = ";
    if(a2==0)
        cout<<"Inf";
    else{
        if(a2*b1<0){
            a1=-a1;
            a2=-a2;
        }
        number(a1*b2,a2*b1);
        cout<<endl;
    }
}
int main(){
    long long a1,b1,a2,b2;
    scanf("%lld/%lld %lld/%lld",&a1,&b1,&a2,&b2);
    add(a1,b1,a2,b2);
    sub(a1,b1,a2,b2);
    mul(a1,b1,a2,b2);
    div(a1,b1,a2,b2);
    return 0;
}