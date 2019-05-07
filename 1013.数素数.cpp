#include<iostream>
using namespace std;
bool judge(int x){
     for(int i=2;i*i<=x;i++)
            if(x%i==0)
                return false;
        return true;
}
int main(){
    int a,b;
    int num,gs;
    bool flag;
    cin>>a>>b;
    num = gs = 0;
    flag = false;
    for(int i=2;i<=1000000;i++) {
        if(judge(i)) {
            num++;
            if(num>=a && num<=b) {
                gs++;
                if(!flag)
                     flag=true;
                else 
                      cout<<" ";
                cout<<i;
                if(gs%10==0) {
                    cout<<endl;
                     flag = false;
                  }   
            }
             if(num>b)
                 break;
            }
       }
    return 0;
}