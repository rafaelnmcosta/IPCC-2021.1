#include <stdio.h>

int main(){
    double peso, acel, tempo, vel, espaco, trabalho;

    scanf("%lf %lf %lf", &peso, &acel, &tempo);

    vel = (acel*tempo);
    espaco = acel*(tempo*tempo)/2;
    
    peso = peso*1000; //converte pra kgs

    trabalho = peso*(vel*vel)/2;

    vel = vel*3.6; //converte pra km/h


    printf("VELOCIDADE = %.2lf\nESPACO PERCORRIDO = %.2lf\nTRABALHO REALIZADO = %.2lf\n", vel, espaco, trabalho);
    
    return 0;
}