#include<iostream>
using namespace std;
int main(){
	int A,B;
	cin>>A>>B;
	int ans = A*B;
	bool flag = true;
	while(ans){
		int num = ans%10;
		ans = ans/10;
		if(flag && !num)   // 当标记状态还为 true ，且当前余数为 0，则不继续执行
			continue;
		if(flag && num)    // 当标记状态为 ture，且当前余数不为 0了，变换标记，开始输出
			flag =false;
		cout<<num;
	}
	return 0;
} 
