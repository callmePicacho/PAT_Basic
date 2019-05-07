#include<iostream>
#include<set>
#include<string>
using namespace std;
int main(){
    int m,n,S;
    string t[1000+5];
    set<string> s;
    cin>>m>>n>>S;
    if(m<S){
        cout<<"Keep going...";
        return 0;
    }
    for(int i=0;i<m;i++)
        cin>>t[i];
    cout<<t[S-1]<<endl;
    s.insert(t[S-1]);
    int temp=0;
    for(int i=S;i<m;i++){
        temp++;
        if(temp==n){
            while(s.count(t[i]) && i<m)
                i++;
            if(i==m)
                return 0;
            cout<<t[i]<<endl;
            s.insert(t[i]);
            temp=0;
        }
    }
    return 0;
}