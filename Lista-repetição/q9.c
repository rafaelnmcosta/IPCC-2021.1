#include <stdio.h>

int main(){

    int n, naux, fat=1;

    scanf("%d", &n);

    naux=n;

    while(naux>0){
        fat*=naux;
        naux--;
    }

    printf("%d! = %d\n", n, fat);

    return 0;
}