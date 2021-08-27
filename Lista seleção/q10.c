#include <stdio.h>

void imprime_milhar(int);
void imprime_centena(int);
void imprime_dezena(int);
void imprime_unidade(int );

int main(){

    int numero, un, dz, ct, ml;
    char ordem;

    scanf("%d", &numero);

    if(numero<=0 || numero > 9999){
        printf("Numero invalido!");
        return 0;
    }

    un = numero%10;
    dz = numero%100/10;
    ct = numero%1000/100;
    ml = numero%10000/1000;

    if(numero<10) ordem = '1';
    else if(numero<100) ordem = '2';
    else if(numero<1000) ordem = '3';
    else ordem = '4';

    switch (ordem){
        case '1':
            printf("(primeira ordem) %d = ", numero);
            imprime_unidade(un);
            printf(" = %d", un);
        break;
        case '2':
            printf("(segunda ordem) %d = ", numero);
            imprime_dezena(dz);

            if(un!=0){
                printf(" + ");
                imprime_unidade(un);
            }
            printf(" = %d", dz*10);
            if(un!=0) printf(" + %d", un);
        break;
        case '3':
            printf("(terceira ordem) %d = ", numero);
            imprime_centena(ct);

            if(dz!=0){
                printf(" + ");
                imprime_dezena(dz);
            }
            if(un!=0){
                printf(" + ");
                imprime_unidade(un);
            }
            printf(" = %d", ct*100);
            if(dz!=0) printf(" + %d", dz*10);
            if(un!=0) printf(" + %d", un);
        break;
        case '4':
            printf("(quarta ordem) %d = ", numero);
            imprime_milhar(ml);

            if(ct!=0){
                printf(" + ");
                imprime_centena(ct);
            }
            if(dz!=0){
                printf(" + ");
                imprime_dezena(dz);
            }
            if(un!=0){
                printf(" + ");
                imprime_unidade(un);
            }
            printf(" = %d", ml*1000);
            if(ct!=0) printf(" + %d", ct*100);
            if(dz!=0) printf(" + %d", dz*10);
            if(un!=0) printf(" + %d", un);
        break;
    }
    printf("\n");

    return 0;
}

void imprime_milhar(int milhar){
    if(milhar == 1) printf("1 unidade de milhar");
    else printf("%d unidades de milhar", milhar);
}

void imprime_centena(int centena){
    if(centena == 1) printf("1 centena");
    else printf("%d centenas", centena);
}

void imprime_dezena(int dezena){
    if(dezena == 1) printf("1 dezena");
    else printf("%d dezenas", dezena);
}

void imprime_unidade(int unidade){
    if(unidade == 1) printf("1 unidade");
    else printf("%d unidades", unidade);
}