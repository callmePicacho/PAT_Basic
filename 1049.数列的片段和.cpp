#include<iostream>
using namespace std;
int main(){
    int n;
    double sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        double t;
        cin>>t;
        sum+=t*(n-i)*(i+1);
    }
    printf("%.2lf",sum);
    return 0;
}