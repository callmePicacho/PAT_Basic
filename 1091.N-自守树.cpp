#include<iostream>
#include<string>
using namespace std;
bool judge(int k,int n){
	string sk = to_string(k);
    string sn = to_string(n);
    if(sn.substr(sn.length()-sk.length(),sn.length())==sk)
        return true;
	return false;
}
int main(){
	int m,k;
	cin>>m;
	while(m--){
		cin>>k;
		bool flag = true;
		for(int i=1;i<10;i++){
			if(judge(k,i*k*k)){
				cout<<i<<" "<<i*k*k<<endl;
				flag = false;
				break;
			}
		}
		if(flag)
			cout<<"No"<<endl;
	}
	return 0;
}
