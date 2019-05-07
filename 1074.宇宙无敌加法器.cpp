#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string n,a,b,sum;
	cin>>n>>a>>b;
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	reverse(n.begin(),n.end());
	int carry = 0;
	for(int i=0;i<n.length();i++)
		if(n[i]=='0')
			n[i]+=10;
	for(int i=0;i<(a.length()>b.length() ? a.length() : b.length());i++){
		int t = carry;
		carry = 0;
		if(i < a.length())
			t += a[i]-'0';
		if(i < b.length())
			t += b[i]-'0';
		if(t >= n[i]-'0'){
			carry = t/(n[i]-'0');
			t %= (n[i]-'0');
		}
		sum += t+'0';
	}
	if(carry!=0)
		sum +=carry+'0';
	reverse(sum.begin(),sum.end());
	bool flag = false;
	for(int i=0;i<sum.length();i++){
		if(sum[i]!='0')
			flag=true;
		if(flag)
			cout<<sum[i];
	}
	if(!flag)
		cout<<0;
	return 0;
}