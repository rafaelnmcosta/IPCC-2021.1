#include <stdio.h>

int main(){

    int num, den, nroDecimais=0, i;
    double n, aux, numAux;

    scanf("%lf", &n);

    aux = n;
    
    //Calcula quantas casas decimais
    while(aux-(int)aux != 0){
        aux*=10;
        nroDecimais++;
    }

    numAux = n;
    den = 1;

    //Multiplica por 10 até virar um numero inteiro
    for(i=1; i<=nroDecimais; i++){
        numAux*=10;
        den*=10;
    }

    //Transforma o numerador em um inteiro agora que não tem mais casas decimais
    num = numAux;

    //Simplifica a fração
    for(i=2; i<=den/2; i++){
        if(num%i==0 && den%i==0){
            num/=i;
            den/=i;
        }
    }

    printf("%d/%d\n", num, den);

    return 0;
}