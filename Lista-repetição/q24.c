#include <stdio.h>

int encontra_primo(int);

int main(){

    int i, a, b, c, mmc=1, menorPrimo=2;

    scanf("%d %d %d", &a, &b, &c);

    while(a!=1 || b!=1 || c!=1){
        if(a%menorPrimo==0 || b%menorPrimo==0 || c%menorPrimo==0){
            printf("%d %d %d :%d\n", a, b, c, menorPrimo);
            if(a%menorPrimo==0) a/=menorPrimo;
            if(b%menorPrimo==0) b/=menorPrimo;
            if(c%menorPrimo==0) c/=menorPrimo;
            mmc*=menorPrimo;
        }
        else{
            menorPrimo = encontra_primo(menorPrimo);
        }
    }

    printf("MMC: %d\n", mmc);

    return 0;
}

int encontra_primo(int ant){
    int n, i, verificador = 1, res;

    while(verificador){
        n = ant+1;
        for(i=2; i<=n/2; i++){
            if(n%i==0) res++;
        }
        if(res==0){
            verificador = 0;
        }
        else{
            ant = n;
            res = 0;
        }
    }
    res = 0;
    return n;
}