#include<iostream>
using namespace std;
int main(){
    int n;
    int max,min;
    double max_score=0,min_score=100000;
    cin>>n;
    while(n--){
        int id;
        double x,y;
        cin>>id>>x>>y;
        if(x*x + y*y > max_score){
            max_score = x*x + y*y;
            max = id;
        }
        if(x*x + y*y < min_score){
            min_score = x*x + y*y;
            min = id;
        }
    }
    printf("%04d %04d",min,max);
    return 0;
}