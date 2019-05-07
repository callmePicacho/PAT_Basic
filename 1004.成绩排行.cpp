#include<iostream>
using namespace std;
struct student{
    char name[10+2];
    char num[10+2];
    int score;
}stu[100+5];
int main(){
    int n;
    scanf("%d\n",&n);
    int max=0,min=0;
    for(int i=0;i<n;i++){
        cin>>stu[i].name>>stu[i].num>>stu[i].score;
        getchar();
        if(stu[i].score > stu[max].score)
            max = i;
        if(stu[i].score < stu[min].score)
            min = i;
    }
    cout<<stu[max].name<<" "<<stu[max].num<<endl;
    cout<<stu[min].name<<" "<<stu[min].num<<endl;
    return 0;
}