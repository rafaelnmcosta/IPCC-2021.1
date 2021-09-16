#include <stdio.h>

int main(){
    
    int inicio, razao, n, i, soma=0;

    scanf("%d %d %d", &inicio, &razao, &n);

    for(i=0; i<n; i++){
        soma+=inicio;
        inicio+=razao;
    }

    printf("%d\n", soma);

    return 0;
}