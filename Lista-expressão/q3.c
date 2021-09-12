#include <stdio.h>

int main(){
    float raio, altura, valor, area_cilindro;

    scanf("%f %f", &raio, &altura);

    area_cilindro = 2*(3.14159*raio*raio) + 2*3.14159*raio*altura;
    valor = area_cilindro*100;

    printf("O VALOR DO CUSTO E = %.2f", valor);
    
    return 0;
}