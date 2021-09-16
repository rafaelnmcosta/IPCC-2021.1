#include <stdio.h>

int main(){
    
    int x, y, i;

    scanf("%d %d", &x, &y);

    if(x%2!=0){
        printf("O PRIMEIRO NUMERO NAO E PAR\n");
        return 0;
    }
    
    for(y;y>0;y--){
        printf("%d ", x);
        x+=2;
    }
    printf("\n");

    return 0;
}