#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include <cctype>
using namespace std;
struct data{
    int score;
    string school;
    int num;
};
bool com(data a,data b){
    return a.score != b.score ? a.score>b.score : (a.num != b.num ? a.num < b.num : a.school < b.school);
}
int main(){
    int n,k=0;
    scanf("%d",&n);
    map<string,double> sum;
    map<string,int> index;
    for(int i=0;i<n;i++){
        string school,no;
        double score;
        cin>>no;
        scanf("%lf",&score);
        cin>>school;
        for(int j=0;j<school.length();j++)
            school[j] = tolower(school[j]);
        index[school]++;
        if(no[0] == 'T')
            score = score*1.5;
        else if(no[0] == 'B')
            score = score/1.5;
        sum[school] += score;
    }
    vector <data> v;
    for(auto it = index.begin();it!=index.end();it++){  //Ê¹ÓÃItertor ±éÀú map
        data t = {(int)sum[it->first],it->first,it->second};
        v.push_back(t);
    }
    printf("%d\n",index.size());
    sort(v.begin(),v.end(),com);
    int pre = -1;
    int rank= 0;
    for(int i=0;i<index.size();i++){
        if(pre != v[i].score)
            rank = i+1;
        pre = v[i].score;
        printf("%d ",rank);
        cout<<v[i].school;
        printf(" %d %d\n",v[i].score,v[i].num); 
    }
    return 0;
}