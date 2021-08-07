#include <stdio.h>

int main(){
    float preco_fabrica, percent_dist, percent_imposto, preco_final;

    scanf("%f %f %f", &preco_fabrica, &percent_dist, &percent_imposto);

    preco_final = preco_fabrica + preco_fabrica*(percent_dist/100) + preco_fabrica*(percent_imposto/100);

    printf("O VALOR DO CARRO E = %.2f\n", preco_final);

    return 0;
}