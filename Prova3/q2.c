#include <stdio.h>
#define MAX 10

int main(){

    int n, mat[MAX][MAX], matInv[MAX][MAX], i, j,k;

    scanf("%d", &n);
    if(n<1 || n>MAX){
        printf("dimensao invalida\n");
        return 0;
    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    //Confere se as posicoes opostas da matriz são iguais ([0][1]==[1][0], [1][2]==[2][1] ...)
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(mat[i][j]!=mat[j][i]){
                printf("nao bissimetrica\n");
                return 0;
            }
        }
    }
    //Cria uma matriz com linhas e colunas trocadas para verificar a simetria na segunda diagonal
    k=0;
    for(j=0; j<n; j++){
        for(i=n-1; i>=0; i--){
            matInv[j][k] = mat[i][j];
            k++;
        }
        k=0;
    }

    //Verifica se a matriz alterada tambem eh simetrica
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(matInv[i][j]!=matInv[j][i]){
                printf("nao bissimetrica\n");
                return 0;
            }
        }
    }

    printf("bissimetrica\n");

    return 0;
}