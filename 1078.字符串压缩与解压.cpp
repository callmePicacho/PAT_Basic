#include<iostream>
using namespace std;
int main(){
    char option;
    char ergodic;
    cin>>option;
    getchar();
    if(option=='D'){
        int num=0;
        while(scanf("%c",&ergodic)==1 && ergodic!='\n'){
            if(ergodic >='0' && ergodic <='9'){
                num = num*10 + ergodic-'0';
            }else{
                for(int i=0;i<num;i++)
                    cout<<ergodic;
                if(!num)
                    cout<<ergodic;
                num=0;
            }
        }
    }else{
        int num=1;
        char previous;
        scanf("%c",&ergodic);
        previous = ergodic;
        while(scanf("%c",&ergodic)==1 && ergodic!='\n'){
            if(ergodic == previous)
                num++;
            else{
                if(num>=2)
                    cout<<num;
                cout<<previous;
                num=1;
                previous = ergodic;
            }
        }
        if(num>=2)
            cout<<num;
        cout<<previous;
    }
    return 0;
}