#include<iostream>
#include<string>
using namespace std;
bool judge(int y,int m,int d){
    if(y>2014 || (y==2014 && m>9) || (y==2014 && m==9 && d>6))  //Î´³öÉú
        return false;
    else if(y<1814 || (y==1814 && m<9) || (y==1814 && m==9 && d<6))  //³¬¹ý200
        return false;
    else
        return true;
}
int main(){
    string old,young;
    int old_y=2015,old_m=9,old_d=6,young_y=1714,young_m=9,young_d=6;
    int n,num=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        string name;
        int y,m,d;
        cin>>name;
        scanf("%d/%d/%d",&y,&m,&d);
        if(judge(y,m,d)){
            if((y > young_y) || (y==young_y && m>young_m) || (y==young_y && m==young_m && d>young_d)){
                young_y = y;
                young_m = m;
                young_d = d;
                young = name;
            }
            if((y < old_y) || (y==old_y && m<old_m) || (y==old_y && m==old_m && d<old_d)){
                old_y = y;
                old_m = m;
                old_d = d;
                old = name;
            }
            num++;
        }
    }
    if(num)
        cout<<num<<" "<<old<<" "<<young;
    else
        cout<<0;
    return 0;
}