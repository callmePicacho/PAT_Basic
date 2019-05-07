#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    long long k;
    string s;
    cin>>s>>n;
    for(int i=1;i<n;i++){
        string t;
        for(long long j=0;j<s.length();j=k){
            for(k=j;k<s.length() && s[k]==s[j];k++);
            t = t + s[j] + to_string(k-j);
        }
        s = t;
    }
    cout<<s;
    return 0;
}