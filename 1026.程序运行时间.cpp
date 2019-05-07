#include<iostream>
using namespace std;
const int CLK_TCK=100;
int main(){
    int c1,c2;
    cin>>c1>>c2;
    int time = (c2-c1);
    time = (time*2+CLK_TCK)/2/CLK_TCK;
    int hours = time/(60*60);
    int minute = time/60%60;
    int second = time%60;
    printf("%02d:%02d:%02d",hours,minute,second);
    return 0;
}