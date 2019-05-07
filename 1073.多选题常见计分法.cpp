#include<iostream>
#include<set>
#include<string>
#include<map>
using namespace std;
struct question{
    double fullScore; //满分个数
    int optionNum; //选项个数
    int correctNum;  //正确个数
    char correctOption[5+2];  //正确选项
    map<char,int> errorMarkNum; //错误标记次数 
}subject[100+5];
int main(){
    int n,m,maxErrorNum=0;
    scanf("%d %d\n",&n,&m);
    for(int i=0;i<m;i++){
        scanf("%lf %d %d ",&subject[i].fullScore,&subject[i].optionNum,&subject[i].correctNum);
        for(int j=0;j<subject[i].correctNum;j++){
            scanf("%c",&subject[i].correctOption[j]);
            getchar();
        }
    }
    for(int i=0;i<n;i++){
        string row;
        getline(cin,row);
        int questionNum=0;  //问题数
        double count=0;  //总分
        for(int j=0;j<row.length();j++){
            int tempNum;
            set<char> tempOption;
            if(row[j]=='('){
                for(int k=j;row[k]!=')';k++){
                    if(row[k]>='0' && row[k]<='9')
                        tempNum = row[k]-'0';
                    else if(row[k]>='a' && row[k]<='z')
                        tempOption.insert(row[k]);
                }
                set<char> tempCorrectOption;
                for(int cori=0;cori<subject[questionNum].correctNum;cori++)
                    tempCorrectOption.insert(subject[questionNum].correctOption[cori]);
                for(int cori=0;cori<subject[questionNum].correctNum;cori++)
                    if(tempOption.count(subject[questionNum].correctOption[cori])){  //如果存在，记次数+1，删除该元素
                        tempOption.erase(subject[questionNum].correctOption[cori]);
                        tempCorrectOption.erase(subject[questionNum].correctOption[cori]);
                    }
                if(tempCorrectOption.size()==0 && tempOption.size() == 0)
                    count += subject[questionNum].fullScore;
                else if(tempCorrectOption.size()!=0 && tempOption.size() == 0){
                    count += subject[questionNum].fullScore/2.0;
                    for(char option='a';option<='e';option++){
                        if(tempCorrectOption.count(option)){
                            if(subject[questionNum].errorMarkNum.count(option)){
                                subject[questionNum].errorMarkNum[option]++;
                            }else
                                subject[questionNum].errorMarkNum[option]=1;
                        }
                        if(subject[questionNum].errorMarkNum[option] > maxErrorNum)
                           maxErrorNum = subject[questionNum].errorMarkNum[option];
                    }
                }
                else if(tempCorrectOption.size()!=0 || tempOption.size()!=0){
                    for(char option='a';option<='e';option++){
                        if(tempCorrectOption.count(option) || tempOption.count(option)){
                            if(subject[questionNum].errorMarkNum.count(option)){
                                subject[questionNum].errorMarkNum[option]++;
                            }else
                                subject[questionNum].errorMarkNum[option]=1;
                        }
                        if(subject[questionNum].errorMarkNum[option] > maxErrorNum)
                           maxErrorNum = subject[questionNum].errorMarkNum[option];
                    }
                }
                questionNum++;
            }
        }
        printf("%.1lf\n",count);
    }
    if(maxErrorNum){
        for(int i=0;i<m;i++)
            for(char option='a';option<='e';option++)
                if(maxErrorNum == subject[i].errorMarkNum[option])
                   cout<<maxErrorNum<<" "<<i+1<<"-"<<option<<endl;
    }else
        cout<<"Too simple";
    return 0;
}