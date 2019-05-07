#include<iostream>
#include<set>
using namespace std;
#define MAX 10000+5
int main(){
	int cp[MAX][2];
	int n,m;
	set<int> s;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>cp[i][0]>>cp[i][1];
	}
	for(int i=0;i<m;i++){
		int k;
		bool flag=true;
		cin>>k;
		for(int j=0;j<k;j++){
			int t;
			cin>>t;
			s.insert(t);
		}
		for(int j=0;j<n;j++){
			if(s.find(cp[j][0])!=s.end() && s.find(cp[j][1])!=s.end())  //在清单集合中找到不相容的一组物品
				flag=false;
		}
		cout<<((flag)?"Yes":"No")<<endl;
		s.clear();
	}
	return 0;
}
