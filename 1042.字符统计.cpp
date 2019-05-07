#include<iostream>
using namespace std;
int main(){
    int mark[150]={0};
    int max=0;
    char c,ans;
    while(scanf("%c",&c)==1 && c!='\n'){
        if(c>='A' && c<='Z')
            mark[c+32]++;
        else if(c>='a' && c<='z')
            mark[c]++;
    }
    for(int i='z';i>='a';i--)
        if(mark[i] >= max){
            max = mark[i];
            ans = i;
        }
    cout<<ans<<" "<<max;
    return 0;
}