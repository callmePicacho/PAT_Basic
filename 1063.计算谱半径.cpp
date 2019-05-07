#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    double max=0;
    cin>>n;
    for(int i=0;i<n;i++){
        double t1,t2;
        cin>>t1>>t2;
        if(sqrt(t1*t1+t2*t2) > max)
            max = sqrt(t1*t1+t2*t2);
    }
    printf("%.2lf",max);
    return 0;
}