#include <stdio.h>

int main(){
    int n, i, numerador, binario[8];

    scanf("%d", &n);

    if(n<0 || n>255){
        printf("Numero invalido!\n");
    }
    else{
        numerador = n;

        for(i=7; i>=0; i--){
            binario[i] = numerador%2;
            numerador = numerador/2;
        }

        for(i=0; i<=7; i++){
            printf("%d", binario[i]);
        }
    }
    printf("\n");
    return 0;
}