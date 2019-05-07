#include<iostream>
#include<set>
#include<string>
using namespace std;
int main(){
    int n,m;
    int studentNum=0,banNum=0;
    set<int> s;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int t;
        cin>>t;
        s.insert(t);
    }
    for(int i=0;i<n;i++){
        string name;
        int ID,k,flag=0;
        cin>>name>>k;
        for(int j=0;j<k;j++){
            cin>>ID;
            if(s.count(ID)){
                if(flag==0){
                    cout<<name<<":";
                    flag=1;
                }
                printf(" %04d",ID);
                banNum++;
            }
        }
        if(flag){
            studentNum++;
            cout<<endl;
        }
    }
    cout<<studentNum<<" "<<banNum;
    return 0;
}