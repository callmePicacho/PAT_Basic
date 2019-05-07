#include<iostream>
using namespace std;
int main(){
    int n,max=0;
    int number[1000+5]={0};
    cin>>n;
    while(n--){
        int num,per,score;
        scanf("%d-%d %d",&num,&per,&score);
        number[num]+=score;
        if(number[max] < number[num])
            max = num;
    }
    cout<<max<<" "<<number[max];
    return 0;
}