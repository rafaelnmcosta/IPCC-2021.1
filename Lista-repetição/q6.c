#include <stdio.h>

int main(){

    int n;
    double i, soma=0;

    scanf("%d", &n);

    if(n<=1){
        printf("Numero invalido!\n");
        return 0;
    }

    for(i=1; i<=n; i++){
        soma+=1/i;
    }

    printf("%.6lf", soma);

    return 0;
}