#include<iostream>
using namespace std;
int a[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char z[]={'1','0','X','9','8','7','6','5','4','3','2'};
int main(){
    int n;
    cin>>n;
    bool flag = true;
    while(n--){
        int sum = 0;
        int i;
        string str;
        cin>>str;
        for(i=0;i<17;i++){
            if(str[i]<'0' || str[i]>'9')
                break;
            sum += (str[i]-'0') * a[i];
        }
        if(i!= 17 || z[sum%11]!=str[17]){
            cout<<str<<endl;
            flag = false;
        }
    }
    if(flag)
        cout << "All passed";
    return 0;
}