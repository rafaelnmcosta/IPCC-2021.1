#include <stdio.h>

/**
 * @brief Retorna o n-esimo termo da sequencia de fibonacci
 * 
 * @param t1 o primeiro termo da sequencia
 * @param t2 o segundo termo da sequencia
 * @param n a posicao do termo que se deseja encontrar
 * @return o n-esimo termo da sequencia
 */
int fibonacci(int t1, int t2, int n);

int main(){

    int t1, t2, n, fibo;

    scanf("%d %d %d", &t1, &t2, &n);

    fibo = fibonacci(t1, t2, n);

    printf("%d\n", fibo);

    return 0;
}

int fibonacci(int t1, int t2, int n){
    
    int i, atual, ant, res;

    if(n==1) return t1;
    if(n==2) return t2;

    atual = t2;
    ant = t1;

    for(i=3; i<=n; i++){
        res = atual+ant;
        ant = atual;
        atual = res;
    }

    return res;
}