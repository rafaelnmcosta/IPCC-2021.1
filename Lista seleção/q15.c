#include <stdio.h>

int main(){

    int CC, DR, RT, classe;

    scanf("%d %d %d", &CC, &DR, &RT);

    if(CC<7){
        if(DR>50){
            if(RT>80000){
                classe=10;
            }
            else classe=9;
        }
        else classe=8;
    }
    else classe=7;

    printf("ACO DE GRAU = %d\n", classe);

    return 0;
}