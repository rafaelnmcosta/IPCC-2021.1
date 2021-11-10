#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
    int numJogo;
    int numero[6];
} CARTELA;
 
int main(){
    int n, i, j, k, l, nConc, sort[6], contAcerto, aux[6], premio=0;
    CARTELA * cart = NULL;
 
    scanf("%d", &n);
 
    cart = (CARTELA *) calloc(n, sizeof(CARTELA));
 
    for(i=0; i<n; i++){
        scanf("%d", &cart[i].numJogo);
        for(j=0; j<6; j++){
            scanf("%d", &cart[i].numero[j]);
        }
    }
 
    scanf("%d", &nConc);
    for(i=0; i<6; i++){
        scanf("%d", &sort[i]);
    }
 
    for(i=0; i<n; i++){
        for(j=0; j<6; j++){
            for(k=0; k<6; k++){
                if(cart[i].numero[j] == sort[k]){
                    aux[l]=sort[k];
                    l++;
                    contAcerto++;
                }
            }
        }
        if(contAcerto==6){
            printf("SENA %d:", cart[i].numJogo);
            for(k=0; k<contAcerto; k++){
                printf(" %d", aux[k]);
            }
            premio=1;
            printf("\n");
        }
        else if(contAcerto==5){
            printf("QUINA %d:", cart[i].numJogo);
            for(k=0; k<contAcerto; k++){
                printf(" %d", aux[k]);
            }
            premio=1;
            printf("\n");
        }
        else if(contAcerto==4){
            printf("QUADRA %d:", cart[i].numJogo);
            for(k=0; k<contAcerto; k++){
                printf(" %d", aux[k]);
            }
            premio=1;
            printf("\n");
        }
        l=0;
        contAcerto=0;
    }
    if(premio==0){
        printf("NENHUMA CARTELA PREMIADA PARA O CONCURSO %d", nConc);
    }

    free(cart);
 
    return 0;
}