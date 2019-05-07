#include<iostream>
#include<string.h>
using namespace std;
char str[]={'0','1','2','3','4','5','6','7','8','9','J','Q','K'};
void re(char t[]){
    for(int i=0;i<(strlen(t)/2);i++){
        char tm=t[i];
        t[i]=t[strlen(t)-1-i];
        t[strlen(t)-1-i]=tm;
    }
}
int main(){
    char a[100+5],b[100+5],c[100+5];
    int i,lena,lenb,max;
    cin>>a>>b;
    re(a);
    re(b);
    lena=strlen(a);
    lenb=strlen(b);
    max = lena>lenb ? lena:lenb;
    for(i=0;i<max;i++){
        if(i%2==0){ //ÆæÊý
            if(i<lenb && i<lena)
                c[i]=str[(a[i]-'0'+b[i]-'0')%13];
            else if(i<lenb)
                c[i]=b[i];
            else if(i<lena)
                c[i]=a[i];
        }
        else{  //Å¼
            if(i<lenb && i<lena)
                c[i]=b[i]-a[i];
            else if(i<lenb)
                c[i]=b[i]-'0';
            else if(i<lena)
                c[i]=-(a[i]-'0');
            if(c[i]<0)
                c[i]+=10;
            c[i]+='0';
        }
    }
    for(i=i-1;i>=0;i--)
        cout<<c[i];
    return 0;
}