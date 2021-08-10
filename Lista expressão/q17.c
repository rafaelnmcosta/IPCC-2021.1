#include <stdio.h>

int main(){
    int valor, n100, n50, n10, n1;

    scanf("%d", &valor);

    n100 = valor/100;
    n50 = (valor - n100*100)/50;
    n10 = (valor - n100*100 - n50*50)/10;
    n1 = valor - n100*100 - n50*50 - n10*10;

    printf("NOTAS DE 100 = %d\nNOTAS DE 50 = %d\nNOTAS DE 10 = %d\nMOEDAS DE 1 = %d\n", n100, n50, n10, n1);

    return 0;
}