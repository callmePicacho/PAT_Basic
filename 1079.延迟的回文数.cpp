#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool judge(string t){
    int len = t.length();
    for(int i=0;i<len/2;i++)
        if(t[i]!=t[len-i-1])
            return false;
    return true;
}
int main(){
    string a,b,c;
    cin>>a;
    if(judge(a)){
        cout<<a<<" is a palindromic number.";
        return 0;
    }
    for(int i=0;i<10;i++){
        int carry = 0;
        int temp=0;
        b = a;
        reverse(b.begin(),b.end());
        for(int j=0;j<a.length();j++){
            temp = a[j]-'0' + b[j]-'0'+carry;
            carry = 0;
            if(temp > 9){
                carry = temp/10;
                temp %= 10;
            }
            c += temp +'0';
        }
        if(carry)
            c += carry+'0';
        reverse(c.begin(),c.end());
        if(judge(c)){
            cout<<a<<" + "<<b<<" = "<<c<<endl;
            cout<<c<<" is a palindromic number.";
            return 0;
        }else{
            cout<<a<<" + "<<b<<" = "<<c<<endl;
            a = c;
            c = "";
        }
    }
    cout<<"Not found in 10 iterations.";
    return 0;
}