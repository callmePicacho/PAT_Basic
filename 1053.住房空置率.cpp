#include<iostream>
using namespace std;
int main(){
    double n,e,d;
    double maybe=0,must=0;
    cin>>n>>e>>d;
    for(int j=0;j<n;j++){
        double k;
        int num=0;
        cin>>k;
        for(int i=0;i<k;i++){
            double t;
            cin>>t;
            if(t<e)
                num++;
        }
        if(num>k/2 && k>d)
            must++;
        else if(num>k/2)
            maybe++;
    }
    printf("%.1lf%% %.1lf%%",maybe/n*100,must/n*100);
    return 0;
}