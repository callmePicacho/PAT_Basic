#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,a[100+5],b[100+5];
    int flag=0;
    int k;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    for(int i=0;i<n-1;i++){
        if(!flag && b[i]>b[i+1]){
            flag=1;
            k=i+1; //后一个的坐标
            continue;
        }
        if(flag==1 && a[i]!=b[i])
            flag=2;
        if(i==n-2)
            if(flag==1 && a[i+1]!=b[i+1])
                flag=2;
    }
    if(flag==1){
        cout<<"Insertion Sort"<<endl;
        sort(b,b+k+1);  //后一个坐标的个数
        cout<<b[0];
        for(int i=1;i<n;i++)
            cout<<" "<<b[i];
    }
    else if(flag==2){
        cout<<"Merge Sort"<<endl;
        for(int i=1;i<=n;i*=2){
            int j;
            for(j=0;j<n-n%i;j+=i)
                sort(a+j,a+j+i);
            sort(a+n-n%i,a+n);
            for(j=0;j<n;j++)
                if(a[j]!=b[j])
                    break;
            if(j==n){
                i*=2;
                for(j=0;j<n-n%i;j+=i)
                    sort(a+j,a+j+i);
                sort(a+n-n%i,a+n);
                cout<<a[0];
                for(int l=1;l<n;l++)
                    cout<<" "<<a[l];
                break;
            }
        }
    }
    return 0;

}