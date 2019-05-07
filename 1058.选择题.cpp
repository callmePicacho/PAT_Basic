#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
struct question{
    int fullScore; //满分个数
    int optionNum; //选项个数
    int correctNum;  //正确个数
    char correctOption[5+2];  //正确选项
    int errorMarkNum; //错误标记次数  
}subject[100+5];
int main(){
    int n,m,maxErrorNum=0;
    scanf("%d %d\n",&n,&m);
    for(int i=0;i<m;i++){
        scanf("%d %d %d ",&subject[i].fullScore,&subject[i].optionNum,&subject[i].correctNum);
        for(int j=0;j<subject[i].correctNum;j++){
            scanf("%c",&subject[i].correctOption[j]);
            getchar();
        }
    }
    for(int i=0;i<n;i++){
        string row;
        getline(cin,row);
        int questionNum=0;  //问题数
        int count=0;  //总分
        for(int j=0;j<row.length();j++){
            int tempNum;
            char tempOption[5+2];
            int ergodic=0; //遍历
            if(row[j]=='('){
                for(int k=j;row[k]!=')';k++){
                    if(row[k]>='0' && row[k]<='9')
                        tempNum = row[k]-'0';
                    else if(row[k]>='a' && row[k]<='z')
                        tempOption[ergodic++] = row[k];
                }
                if(tempNum == subject[questionNum].correctNum){
                    int h;
                    for(h=0;h<ergodic;h++)
                        if(subject[questionNum].correctOption[h]!=tempOption[h])
                            break;
                    if(h==ergodic)
                        count += subject[questionNum].fullScore;
                    else
                        subject[questionNum].errorMarkNum++;
                }else{
                    subject[questionNum].errorMarkNum++;
                }
                if(subject[questionNum].errorMarkNum > maxErrorNum)
                    maxErrorNum = subject[questionNum].errorMarkNum;
                questionNum++;
            }
        }
        cout<<count<<endl;
    }
    if(maxErrorNum){
        cout<<maxErrorNum;
        for(int i=0;i<m;i++)
            if(maxErrorNum == subject[i].errorMarkNum)
                cout<<" "<<i+1;
    }else
        cout<<"Too simple";
    return 0;
}