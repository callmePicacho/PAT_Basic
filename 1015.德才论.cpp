#include<iostream>
#include<algorithm>
using namespace std;
int n,l,h;
struct student{
    int num;
    int cai;
    int de;
};
struct student stu1[100000+5];
struct student stu2[100000+5];
struct student stu3[100000+5];
struct student stu4[100000+5];
bool com(struct student a,struct student b){
    if(a.de + a.cai  != b.de + b.cai)   //当德才总分不想等
        return (a.de+a.cai) > (b.de+b.cai);   //按总分降序排列
    else   //当德才总分相等
        if(a.de == b.de)   //当得分相等
            return a.num < b.num;   //按准考证升序排列
        else   //当得分不想等
            return a.de > b.de;  //按得分降序排列
}
int main(){
    int k=0;
    int s1,s2,s3,s4;
    s1=s2=s3=s4=0;
    cin>>n>>l>>h;
    for(int i=0;i<n;i++){
        int num,de,cai;
        cin>>num>>de>>cai;
        if(de >= l && cai >= l){
            if(de>=h && cai >=h){
                stu1[s1].num = num;
                stu1[s1].de = de;
                stu1[s1].cai = cai;
                s1++;
            }
            else if(de>=h && cai <h){
                stu2[s2].num = num;
                stu2[s2].de = de;
                stu2[s2].cai = cai;
                s2++;
            }
            else if(de<h && cai<h && de>=cai){
                stu3[s3].num = num;
                stu3[s3].de = de;
                stu3[s3].cai = cai;
                s3++;
            }
            else{
                stu4[s4].num = num;
                stu4[s4].de = de;
                stu4[s4].cai = cai;
                s4++;
            }
        }
    }
    sort(stu1,stu1+s1,com);
    sort(stu2,stu2+s2,com);
    sort(stu3,stu3+s3,com);
    sort(stu4,stu4+s4,com);
    cout<<s1+s2+s3+s4<<endl;
    for(int i=0;i<s1;i++)
        printf("%d %d %d\n",stu1[i].num,stu1[i].de,stu1[i].cai);
    for(int i=0;i<s2;i++)
        printf("%d %d %d\n",stu2[i].num,stu2[i].de,stu2[i].cai);
    for(int i=0;i<s3;i++)
        printf("%d %d %d\n",stu3[i].num,stu3[i].de,stu3[i].cai);
    for(int i=0;i<s4;i++)
        printf("%d %d %d\n",stu4[i].num,stu4[i].de,stu4[i].cai);
    return 0;
}