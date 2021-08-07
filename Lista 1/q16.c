#include <stdio.h>

int main(){
    int numero, centenas, dezenas, unidades;

    scanf("%d", &numero);

    centenas = numero/100;
    dezenas = (numero - centenas*100)/10;   //remove as centenas p/ calcular as dezenas
    unidades = (numero - centenas*100 - dezenas*10); //subtrai centenas e dezenas p/ achar unidades

    printf("%d%d%d\n", unidades, dezenas, centenas); // imprime as casas invertidas

    return 0;
}