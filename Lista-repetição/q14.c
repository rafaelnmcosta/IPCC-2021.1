#include <stdio.h>

int fatorial(int);

int main(){

    int n, i, cont, totalFinais, timeA=1, timeB=1;

    scanf("%d", &n);

    if(n<2){
        printf("Campeonato invalido!\n");
        return 0;
    }

    //Faz a combinação das possiveis finais com a formula C = n!/k!*(n-k)!
    totalFinais = fatorial(n)/(2*fatorial(n-2));

    for(i=1; i<=totalFinais; i++){
        printf("Final %d: ", i);
        if(timeB<n){
            timeB++;
        }
        else{
            timeA++;
            timeB = timeA+1;
        }
        printf("Time%d X Time%d\n", timeA, timeB);
    }
    return 0;
}

int fatorial(int n){

    int fat=1;

    while(n>0){
        fat*=n;
        n--;
    }

    return fat;
}