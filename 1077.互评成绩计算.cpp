#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        double G2,G1=0;
        int max=-1,min=101;
        int num=0;
        cin>>G2;
        for(int i=0;i<n-1;i++){
            int t;
            cin>>t;
            if(t>=0 && t<=m){
                G1+=t;
                num++;
                if(max < t)
                    max = t;
                if(min > t)
                    min = t;
            }
        }
        G1= G1-max-min;
        G1/=(num-2);
        printf("%d\n",(int)((G1+G2)/2+0.5));
    }
    return 0;
}