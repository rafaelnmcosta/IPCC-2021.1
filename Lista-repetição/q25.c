#include <stdio.h>

int main(){

    int n, i, j, k, naux;

    scanf("%d", &n);

    for(i=1; i<=n; i++){
        printf("%d*%d*%d = ", i, i, i);

        if(i%2==0){
            naux = i*i - 1;
            for(j=1; j<i/2; j++){
                naux-=2;
            }
        }
        else{
            naux = i*i;
            for(j=1; j<=i/2; j++){
                naux-=2;
            }
        }

        for(k=1; k<=i; k++){
            if(k==i){
                printf("%d", naux);    
            }
            else{
                printf("%d+", naux);
                naux+=2;
            }
        }
        printf("\n");
    }

    return 0;
}