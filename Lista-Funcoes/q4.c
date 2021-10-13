#include <stdio.h>

/**
 * @brief Função que soma os divisores do numero informado, excluindo o proprio numero
 * 
 * @param n numero cujos divisores serão somados
 * @return valor da soma dos divisores de n
 */
int somaDivisores(int n);

int main(){

    int n, soma, i;

    scanf("%d", &n);

    printf("%d = 1", n);

    for(i=2; i<=n/2; i++){
        
        if(n%i==0) printf(" + %d", i);
    }

    soma = somaDivisores(n);
    printf(" = %d ", soma);

    if(soma==n){
        printf("(NUMERO PERFEITO)\n");
    }
    else{
        printf("(NUMERO NAO E PERFEITO)\n");
    }
    
    return 0;
}

int somaDivisores(int n){

    int i, res=0;

    for(i=1; i<=n/2; i++){
        if(n%i==0) res+=i;
    }

    return res;
}