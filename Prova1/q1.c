#include <stdio.h>

int main(){

    int n1, n2, n3, n4, n5, menor, maior;
    char verificador_ordem = '0';

    /* verificador de ordem:
        0 - desordenado
        1 - crescente
        2 - decrescente
    */

    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    
    menor = n1;
    maior = n1;

    if(menor > n2) menor = n2;
    if(menor > n3) menor = n3;
    if(menor > n4) menor = n4;
    if(menor > n5) menor = n5;

    if(maior < n2) maior = n2;
    if(maior < n3) maior = n3;
    if(maior < n4) maior = n4;
    if(maior < n5) maior = n5;

    if(n1 < n2 && n2 < n3 && n3 < n4 && n4 < n5){
        verificador_ordem = '1'; //crescente
    }
    else if(n1 > n2 && n2 > n3 && n3 > n4 && n4 > n5){
        verificador_ordem = '2'; //decrescente
    }

    printf("MENOR: %d, MAIOR: %d\n", menor, maior);

    switch (verificador_ordem){
        case '0':
            printf("DESORDENADO\n");
        break;

        case '1':
            printf("ORDENADO CRESCENTE\n");
        break;

        case '2':
            printf("ORDENADO DECRESCENTE\n");
        break;
    }

    return 0;

}