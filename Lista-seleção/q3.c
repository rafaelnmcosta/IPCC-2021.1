#include <stdio.h>

int main(){

    int conta;
    float consumo, valor_final;
    char tipo_consumidor;

    scanf("%d %f %c", &conta, &consumo, &tipo_consumidor);

    switch (tipo_consumidor){
        case 'R':
            valor_final = 5 + 0.05*consumo;
        break;

        case 'C':
            consumo -= 80;
            valor_final = 500;
            if(consumo>0){
                valor_final += 0.25*consumo;
            }
        break;

        case 'I':
            consumo -= 100;
            valor_final = 800;
            if(consumo>0){
                valor_final += 0.04*consumo;
            }
        break;
    }

    printf("CONTA = %d\nVALOR DA CONTA = %.2f\n", conta, valor_final);

    return 0;
}