#include <stdio.h>

int main(){

    int n1, n2, n3, num_concat;

    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1>9 || n2>9 || n3>9){
        printf("DIGITO INVALIDO\n");
        return 0;
    }
    else{
        num_concat = n1*100 + n2*10 +n3;

        printf("%d, %d\n", num_concat, num_concat*num_concat);
    }

    return 0;
}