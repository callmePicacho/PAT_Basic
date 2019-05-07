#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    getchar();
    for(int j=0;j<n;j++){
        string s;
        bool num = false;
        bool let = false;
        bool ill = false;
        getline(cin,s);
        if(s.length() < 6){
            cout<<"Your password is tai duan le."<<endl;
            continue;
        }
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
                let = true;
            else if(s[i]>='0' && s[i]<='9')
                num = true;
            else if(s[i]!='.')
                ill = true;
        }
        if(ill)
            cout<<"Your password is tai luan le."<<endl;
        else if(let && !num)
            cout<<"Your password needs shu zi."<<endl;
        else if(!let && num)
            cout<<"Your password needs zi mu."<<endl;
        else
            cout<<"Your password is wan mei."<<endl;
    }
    return 0;
}