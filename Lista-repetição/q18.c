#include <stdio.h>

int main(){

    double valorIngresso, valorInicial, valorFinal, ni, vi, lucro, desp, maiorLucro, melhorValor, numeroIngressos;

    scanf("%lf %lf %lf", &valorIngresso, &valorInicial, &valorFinal);

    if(valorInicial>=valorFinal){
        printf("INTERVALO INVALIDO\n");
        return 0;
    }

    if(valorInicial<valorIngresso){
        ni = 120 + (valorIngresso-valorInicial)*50;
    }
    else if(valorInicial>valorIngresso){
        ni = 120 - (valorInicial-valorIngresso)*60;
    }
    else{
        ni = 120;
    }

    maiorLucro = 0;
    melhorValor = valorInicial;
    numeroIngressos = ni;
    vi = valorInicial;
    
    while(vi<=valorFinal){
        desp = 0.05*ni;
        lucro = vi*ni - 200 - desp;

        if(lucro>maiorLucro){
            maiorLucro = lucro;
            melhorValor = vi;
            numeroIngressos = ni;
        }

        printf("V: %.2lf, N: %.0lf, L: %.2lf\n", vi, ni, lucro);
        
        vi++;
        if(vi<valorIngresso){
            ni = 120 + (valorIngresso-vi)*50;
        }
        else{
        ni = 120 - (vi-valorIngresso)*60;
        }
    }

    if(maiorLucro==0){
        melhorValor = 0;
        numeroIngressos = 0;
    }

    printf("Melhor valor final: %.2lf\nLucro: %.2lf\nNumero de ingressos: %.0lf\n", melhorValor, maiorLucro, numeroIngressos);   

    return 0;
}