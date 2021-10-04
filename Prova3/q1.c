#include <stdio.h>
#define MAX 100

/**
 * @brief Essa funcao le um vetor de n numeros inteiros que formam um conjunto valido;
 * A funcao le uma sequencia uma sequencia de numeros ate encontrar uma quantidade de n numeros unicos;
 * 
 * @param vect vetor de numeros inteiros;
 * @param n quantidade de numeros unicos a serem lidos
 * @return o vetor vect e preenchido com numeros nao repetidos
 */
void le_conjunto(int *vect, int n);

int main(){

    int n, vect[MAX], i;

    scanf("%d", &n);
    if(n<1 || n>MAX) return 0;

    le_conjunto(vect, n);

    printf("(%d", vect[0]);
    for(i=1; i<n; i++) printf(",%d", vect[i]);
    printf(")\n");

    return 0;
}

void le_conjunto(int *vect, int n){
    int cont=0, aux, i, repetido=0;

    /*Le um numero e percorre o vetor verificando se ele ja esta presente,
    * caso nao esteja, adiciona esse numero ao vetor,
    * do contrario continua o processo de leitura ate n numeros serem inseridos
    */
    while(cont<n){
        scanf("%d", &aux);

        for(i=0; i<cont; i++){
            if(aux==vect[i]){
                repetido=1;
            }
        }

        if(repetido==0){
            vect[cont] = aux;
            cont++;
        }
        repetido=0;
    }
}