#include<iostream>
#include<string>
using namespace std;
int main(){
    int zeroNum=0,oneNum=0,count=0;
    char t;
    while(scanf("%c",&t)==1 && t!='\n'){
        if(t>='a' && t<='z')
            count += t-'a'+1;
        else if(t>='A' && t<='Z')
            count += t-'A'+1;
    }
    while(count){
        if(count%2==0)
            zeroNum++;
        else
            oneNum++;
        count/=2;
    }
    cout<<zeroNum<<" "<<oneNum;
    return 0;
}