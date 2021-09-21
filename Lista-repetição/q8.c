#include <stdio.h>
int main(){

    int a, b, anos=0;

    scanf("%d %d", &a, &b);

    while(a<b){
        a+=(0.03*a);
        b+=(0.015*b);
        anos++;
    }

    printf("ANOS = %d\n", anos);

    return 0;
}