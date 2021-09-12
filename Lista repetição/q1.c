#include <stdio.h>
 
int main(){
 
    int nro_testes, pessoas, i;
    double pop, ger, arq, cad, renda;
 
    scanf("%d", &nro_testes);
 
    for(i=1; i<=nro_testes; i++){
        scanf("%d %lf %lf %lf %lf", &pessoas, &pop, &ger, &arq, &cad);
        renda = pop/100*pessoas*1 + ger/100*pessoas*5 + arq/100*pessoas*10 + cad/100*pessoas*20;
        printf("A RENDA DO JOGO N. %d E = %.2f\n", i, renda);
    }
 
    return 0;
}