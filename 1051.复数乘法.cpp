#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double R1,P1,R2,P2;
    double real,imag;
    cin>>R1>>P1>>R2>>P2;
    real=R1*cos(P1)*R2*cos(P2)-(sin(P1)*R1*sin(P2)*R2);
    imag=R1*cos(P1)*sin(P2)*R2+sin(P1)*R1*R2*cos(P2);
    if(real+0.005>=0 && real<0)
        printf("0.00");
    else
        printf("%.2lf",real);
    if(imag+0.005>=0 && imag<0)
        printf("+0.00i");
    else if(imag>=0)
        printf("+%.2lfi",imag);
    else
        printf("%.2lfi",imag);
    return 0;
}