#include<iostream>
#include<algorithm>
using namespace std;
struct moon{
    double num;
    double tot;
    double pri;
}mo[1000+5];
bool com(struct moon a,struct moon b){
    return a.pri > b.pri;
}
int main(){
    int n,d;
    double sum=0;
    cin>>n>>d;
    for(int i=0;i<n;i++)
        cin>>mo[i].num;
    for(int i=0;i<n;i++){
        cin>>mo[i].tot;
        mo[i].pri = mo[i].tot / mo[i].num;
    }
    sort(mo,mo+n,com);
    for(int i=0;i<n;i++){
        if(mo[i].num < d){
            d -= mo[i].num;
            sum += mo[i].tot;
        }
        else if(mo[i].num >= d && d!=0){
            sum += d*mo[i].pri;
            break;
        }
    }
    printf("%.2lf",sum);
    return 0;
}