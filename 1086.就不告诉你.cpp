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
		if(flag && !num)   // �����״̬��Ϊ true ���ҵ�ǰ����Ϊ 0���򲻼���ִ��
			continue;
		if(flag && num)    // �����״̬Ϊ ture���ҵ�ǰ������Ϊ 0�ˣ��任��ǣ���ʼ���
			flag =false;
		cout<<num;
	}
	return 0;
} 
