#include<iostream>
using namespace std;
bool sushu(int x){
    for(int i=2;i*i<=x;i++)
            if(x%i==0)
                return false;
    return true;
}
int main(){
    int n;
    cin>>n;
    int ans=0;
    for(int i=4;i<=n;i++)
        if(sushu(i) && sushu(i-2))
            ans++;
    cout<<ans;
    return 0;
}