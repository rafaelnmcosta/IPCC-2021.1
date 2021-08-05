#include <stdio.h>

int main(){

    float v_farenheit, v_polegadas, v_celsius, v_milimetros;

    scanf("%f %f", &v_farenheit, &v_polegadas);

    v_celsius = 5*(v_farenheit-32)/9;
    v_milimetros = 25.4*v_polegadas;

    printf("O VALOR EM CELSIUS = %.2f\nA QUANTIDADE DE CHUVA E = %.2f\n", v_celsius, v_milimetros);

    return 0;
}