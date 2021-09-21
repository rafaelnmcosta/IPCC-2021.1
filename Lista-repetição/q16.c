#include <stdio.h>

int main(){

    int matricula, horas;
    double valorHora, salario;

    while(1){
        scanf("%d %d %lf\n", &matricula, &horas, &valorHora);
        if(matricula == 0) return 0;

        salario = valorHora*horas;

        printf("%d %.2lf\n", matricula, salario);
    }
}