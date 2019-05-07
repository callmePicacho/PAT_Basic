#include<iostream>
using namespace std;
int main(){
    char a[80+2][80+2];
    int t=0;
    int i=0;
    while(scanf("%c",&a[t][i]) && a[t][i]!='\n'){
        i++;
        if(a[t][i-1]==' '){
            a[t][i-1]='\0';
            i=0;
            t++;
        }
    }
    a[t][i]='\0';  //最后一个单词直接跳出循环了，没有添加到\0
    for(int j=t;j>=0;j--){
        if(j!=t)
            cout<<" ";
        cout<<a[j];
    }
    return 0;
}