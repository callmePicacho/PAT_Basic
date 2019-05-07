#include<iostream>
#include<string>
using namespace std;
int main(){
    string correct;
    int n;
    cin>>correct>>n;
    getchar();
    for(int i=0;i<n;i++){
        string t;
        getline(cin,t);
        if(t=="#")
            return 0;
        else if(t==correct){
            cout<<"Welcome in"<<endl;
            return 0;
        }else if(t!=correct)
            cout<<"Wrong password: "<<t<<endl;
    }
    cout<<"Account locked"<<endl;
    return 0;
}