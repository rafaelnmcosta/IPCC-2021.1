#include <stdio.h>

int main(){

    int n, i, div, soma=1;

    scanf("%d", &n);

    printf("%d = 1", n);

    for(div=2; div<=n/2; div++){
        if(n%div==0){
            soma+=div;
            printf(" + %d", div);
        }
    }

    printf(" = %d", soma);

    if(soma==n) printf(" (NUMERO PERFEITO)");
    else printf(" (NUMERO NAO E PERFEITO)");

    return 0;
}