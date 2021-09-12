#include <stdio.h>

int main(){

    int matricula, nro_dependente;
    float salario_min, salario_func, imp_normal, imp_bruto, imp_liquido, resultado;

    scanf("%d %f %d %f %f", &matricula, &salario_min, &nro_dependente, &salario_func, &imp_normal);

    if(salario_func>12*salario_min){
        imp_bruto = 0.2*salario_func;
    }
    else if(salario_func>5*salario_min){
        imp_bruto = 0.08*salario_func;
    }
    else{
        imp_bruto = 0;
    }

    imp_normal = imp_normal*salario_func/100;

    imp_liquido = imp_bruto - 300*nro_dependente;

    resultado = imp_liquido - imp_normal;

    printf("MATRICULA = %d\n", matricula);
    printf("IMPOSTO BRUTO = %.2f\n", imp_bruto);
    printf("IMPOSTO LIQUIDO = %.2f\n", imp_liquido);
    printf("RESULTADO = %.2f\n", resultado);

    if(resultado>0){
        printf("IMPOSTO A PAGAR\n");
    }
    else if(resultado == 0){
        printf("IMPOSTO QUITADO\n");
    }
    else{
        printf("IMPOSTO A RECEBER\n");
    }

    return 0;
}