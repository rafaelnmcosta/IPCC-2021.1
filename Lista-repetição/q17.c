#include <stdio.h>

int main(){

    double n, e, raiz, erro, rAnt=1;

    scanf("%lf %lf", &n, &e);

    do{
        raiz = (rAnt + (n/rAnt))/2;
        erro = raiz*raiz - n;
        printf("r: %.9lf, err: %.9lf\n", raiz, erro);
        rAnt = raiz;
    } while(erro>e);

    return 0;
}