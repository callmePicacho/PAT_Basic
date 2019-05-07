#include<iostream>
using namespace std;
int main(){
    int n;
    int js,jp,jb;
    int j_j,j_c,j_b;
    int y_j,y_c,y_b;
    js=jp=jb=0;
    j_j=j_c=j_b=0;
    y_j=y_c=y_b=0;
    cin>>n;
    getchar();
    for(int i=0;i<n;i++){
        char j,y;
        scanf("%c %c",&j,&y);
        getchar();
        if(j==y)
            jp++;
        else if(j=='C' && y=='J'){
            js++;
            j_c++;
        }
        else if(j=='C' && y=='B'){
            jb++;
            y_b++;
        }
        else if(j=='B' && y=='J'){
            jb++;
            y_j++;
        }
        else if(j=='B' && y=='C'){
            js++;
            j_b++;
        }
        else if(j=='J' && y=='B'){
            js++;
            j_j++;
        }
        else if(j=='J' && y=='C'){
            jb++;
            y_c++;
        }
    }
    cout<<js<<" "<<jp<<" "<<jb<<endl;
    cout<<jb<<" "<<jp<<" "<<js<<endl;
    if(j_b >= j_c && j_b >= j_j)
        cout<<"B";
    else if(j_c > j_b && j_c >= j_j)
        cout<<"C";
    else
        cout<<"J";
    cout<<" ";
    if(y_b >= y_c && y_b >= y_j)
        cout<<"B";
    else if(y_c > y_b && y_c >= y_j)
        cout<<"C";
    else
        cout<<"J";
    return 0;
}