#include<iostream>
using namespace std;
int main(){
    int P,A,T,e,s,t;
    P=A=T=e=s=t=0;
    char a;
    while(scanf("%c",&a)==1 && a!='\n'){
        if(a=='P')
            P++;
        else if(a=='A')
            A++;
        else if(a=='T')
            T++;
        else if(a=='e')
            e++;
        else if(a=='s')
            s++;
        else if(a=='t')
            t++;
    }
    while(P || A || T || e || s || t){
        if(P){
            cout<<'P';
            P--;
        }
        if(A){
            cout<<'A';
            A--;
        }
        if(T){
            cout<<'T';
            T--;
        }
        if(e){
            cout<<'e';
            e--;
        }
        if(s){
            cout<<'s';
            s--;
        }
        if(t){
            cout<<'t';
            t--;
        }
    }
    return 0;
}