#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        int p_sum,a_sum,t_sum;  
        int p_pos,t_pos;
        p_sum=a_sum=t_sum=p_pos=t_pos=0;
        for(int j=0;j<a.size();j++){
            if(a[j]=='P'){
                p_sum++;
                p_pos=j;
            }
            else if(a[j]=='A')
                a_sum++;
            else if(a[j]=='T'){
                t_sum++;
                t_pos=j;
            }
        }

        if(p_sum+a_sum+t_sum==a.size() && p_sum==1 && t_sum==1 && a_sum>=1 && p_pos*(t_pos-p_pos-1)==a.size()-t_pos-1)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
    return 0;
}