#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> v(n+1);
	for(int i=1;i<=n;i++)
		cin>>v[i]; 
	for(int i=1;i<=n;i++)   
		for(int j=i+1;j<=n;j++){
			vector<int> lie,a(n+1,1); // a 数组创建并设全部初值为 1
			a[i]=a[j]=-1;   // 假设 i,j 是狼人
			for(int k=1;k<=n;k++){
				if(v[k]*a[abs(v[k])]<0)   //如果当前玩家是说谎者
					lie.push_back(k); //存入数组
			}
			if(lie.size()==2 && a[lie[0]]+a[lie[1]]==0){
				cout<<i<<" "<<j;
				return 0;
			}
		}
	cout<<"No Solution";
	return 0;
}
