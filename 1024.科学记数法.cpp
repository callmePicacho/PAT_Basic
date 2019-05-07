#include<iostream>
using namespace std;
int main(){
    string a;
    int k=0;
    int len=0;
    cin>>a;
    if(a[k++]=='-')
        cout<<"-";
    int  start=k; 
    while(a[k++]!='E');  
    int end=k-1;  
    for(int i=k+1;a[i]!='\0';i++)
        len = (a[i]-'0')+len*10;
    if(len==0)
        for(int i=start;i<end;i++)
            cout<<a[i];
    else if(a[k]=='-'){
            cout<<"0.";
            for(int i=0;i<len-1;i++)
                cout<<0;
            for(int i=start;i<end;i++)
                if(a[i]!='.')
                    cout<<a[i];
    }
    else if(a[k]=='+'){
        bool flag = false;
        for(int i=start;i<end;i++){
            if(a[i]!='.')
                cout<<a[i];
            else{
                flag = true;
                continue;
            }
            if(flag)
                len--;
            if(len==0 && i!=end-1)
                cout<<'.';
        }
        for(int i=0;i<len;i++)
            cout<<0;
    }
    return 0;
}