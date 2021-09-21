#include <stdio.h>

int main(){

    int n, brancos, pretos, total;

    scanf("%d", &n);

    brancos = 32*n;
    pretos = 31*n*2 + n;

    total = brancos + pretos;

    printf("%d\n", total);

    return 0;
}