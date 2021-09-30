#include <stdio.h>

int main(){

    int m, n, i, j;
    // m = linhas   n = colunas

    scanf("%d %d", &m, &n);

    for(i=2; i<=m; i++){
        for(j=1; j<i&&j<=n; j++){
            if(j==1) printf("(%d,%d)", i, j);
            else printf("-(%d,%d)", i, j); 
        }
        printf("\n");
    }

    return 0;
}