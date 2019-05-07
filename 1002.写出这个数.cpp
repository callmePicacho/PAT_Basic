
#include<iostream>
#include<string.h>
using namespace std;
char name[][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
int main(){
    string a;
    char b[5][5];
    int sum=0;
    int k=0;
    cin>>a;
    for(int i=0;a[i]!='\0';i++)
        sum += a[i]-'0';
    while(sum!=0){
        int t=sum%10;
        sum/=10;
        strcpy(b[k++],name[t]);
    }
    for(int i=k-1;i>=0;i--){
        if(i!=k-1)
            cout<<" ";
        cout<<b[i];
    }
    return 0;
}
