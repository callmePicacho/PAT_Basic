#include<iostream>
#include<string.h>
using namespace std;
char low_num[][5]={{"tret"},{"jan"}, {"feb"}, {"mar"},{"apr"},{"may"},{"jun"},{"jly"},{"aug"},{"sep"},{"oct"},{"nov"},{"dec"}};
char hig_num[][5]={{" "},{"tam"},{"hel"}, {"maa"}, {"huh"}, {"tou"}, {"kes"}, {"hei"}, {"elo"}, {"syy"}, {"lok"}, {"mer"}, {"jou"}};
int main(){
    int n;
    scanf("%d\n",&n);
    while(n--){
        string a;
        getline(cin,a);
        if(a[0]>='0' && a[0]<='9'){
            int num=0;
            for(int i=0;a[i]!='\0';i++)
                num = a[i]-'0' + num*10;
            int high=num/13;
            int low=num%13;
            if(high && low)
                cout<<hig_num[high]<<" "<<low_num[low];
            else if(high)
                cout<<hig_num[high];
            else
                cout<<low_num[low];
        }
        else{
            if(a.size()>4){
                int high,low;
                int j,kg;
                for(int i=0;i<13;i++){
                    for(j=0;a[j]!=' ';j++)
                        if(a[j]!=hig_num[i][j])
                            break;
                    if(a[j]==' '){
                        high=i;
                        kg=j;
                        break;
                    }
                }
                for(int i=0;i<13;i++){
                    for(j=kg+1;a[j]!='\0';j++)
                        if(a[j]!=low_num[i][j-kg-1])
                            break;
                    if(a[j]=='\0'){
                        low=i;
                        break;
                    }
                }
                cout<<high*13+low;
            }
            else if(a.size()==4)
                cout<<0;
            else{
                int j;
                for(int i=0;i<13;i++){
                    for(j=0;a[j]!='\0';j++)
                        if(a[j]!=hig_num[i][j])
                            break;
                    if(a[j]=='\0'){
                        cout<<i*13;
                        break;
                    }
                }
                for(int i=0;i<13;i++){
                    for(j=0;a[j]!='\0';j++)
                        if(a[j]!=low_num[i][j])
                            break;
                    if(a[j]=='\0'){
                        cout<<i;
                        break;
                    }
                }
            }
        }
        cout<<endl;
    }
    return 0;
}