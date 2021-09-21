#include <stdio.h>

int main(){

    int n=1, contPar=0, contImp=0, somaPar=0, somaImpar=0;
    double mp, mi;

    while(n!=0){
        scanf("%d", &n);
        if(n!=0){
            if(n%2 == 0){
                somaPar+=n;
                contPar++;
            }
            else{
                somaImpar+=n;
                contImp++;
            }
        }
    }

    if(contPar==0) mp=0;    
    else mp=(double)somaPar/contPar;
    if(contImp==0) mi=0;
    else mi=(double)somaImpar/contImp;

    printf("MEDIA PAR: %.6lf\nMEDIA IMPAR: %.6lf", mp, mi);

    return 0;
}