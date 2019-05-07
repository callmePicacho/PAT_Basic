#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    vector<double> v;
    cin>>n;
    for(int i=0;i<n;i++){
        double t;
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(),v.end());
    double ans=v[0];
    for(int i=1;i<n ;i++)
        ans = (ans + v[i])/2;
    cout<<(int)ans;
    return 0;
}