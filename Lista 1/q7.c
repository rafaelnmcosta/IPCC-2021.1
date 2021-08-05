#include <stdio.h>

int main(){
    float altura, aresta, volume;

    scanf("%f %f", &altura, &aresta);

    volume = (((3*aresta*aresta*sqrt(3))/2) * altura)/3;

    printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", volume);

    return 0;
}