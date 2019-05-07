#include<iostream>
using namespace std;
int a[]={1,2,3,4};
int main(){
    int n;
    char option,ans;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++)
        for(int j=0;j<4;j++){
            scanf("%c-%c",&option,&ans);
            if(ans == 'T')
                cout<<a[option-'A'];
            getchar();
        }
    return 0;
}