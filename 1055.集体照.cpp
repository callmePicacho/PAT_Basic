#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
struct data{
    string name;
    int height;
};
bool com(struct data a,struct data b){
    if(a.height == b.height)
        return a.name < b.name;
    else
        return a.height > b.height;
}
int main(){
    int n,k;
    int con=0;
    vector<struct data> per;
    scanf("%d %d\n",&n,&k);
    for(int i=0;i<n;i++){
        data t;
        cin>>t.name>>t.height;
        per.push_back(t);
    }
    sort(per.begin(),per.end(),com);
    for(int j=0;j<n/k;j++){
        int flag=0;
        vector<struct data> left;
        vector<struct data> right;
        if(j==0){
            for(int i=0 ; i<n/k+n%k;i++){
                if(i%2==1)
                    left.push_back(per[con++]);
                else
                    right.push_back(per[con++]);
            }
        }else{
            for(int i=0;i<n/k;i++){
                if(i%2==1)
                    left.push_back(per[con++]);
                else
                    right.push_back(per[con++]);
            }
        }
        for(int i=left.size()-1;i>=0;i--){
            if(flag==0)
                flag=1;
            else
                cout<<" ";
            cout<<left[i].name;
        }
        for(int i=0;i<right.size();i++){
            if(flag==0)
                flag=1;
            else
                cout<<" ";
            cout<<right[i].name;
        }
        cout<<endl;
        if(con==n)
            return 0;
    }
    return 0;
}