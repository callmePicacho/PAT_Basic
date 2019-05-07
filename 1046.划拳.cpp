#include<iostream>
using namespace std;
int main(){
    int n,j=0,y=0;
    cin>>n;
    while(n--){
        int j1,j2,y1,y2;
        cin>>j1>>j2>>y1>>y2;
        if(j1+y1==j2 && j1+y1==y2)
            continue;
        else if(j1+y1==j2)
            y++;
        else if(j1+y1==y2)
            j++;
    }
    cout<<j<<" "<<y;
    return 0;
}