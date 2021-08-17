#include <stdio.h>

int main(){

    double a, b, c, resultado;
    char operador, igualdade;

    //O char igualdade está sendo usado para guardar o caractere '=' no scanf pois usar %* não estava funcionando

    scanf("%lf %c %lf %c %lf", &a, &operador, &b, &igualdade, &c);

    switch (operador){
        case '+':
            resultado = a+b;
            if(resultado == c){
                printf("CORRETO\n");
            }
            else{
                printf("ERRADO! O resultado deveria ser: %lf\n", resultado);
            }
        break;

        case '-':
            resultado = a-b;
            if(resultado == c){
                printf("CORRETO\n");
            }
            else{
                printf("ERRADO! O resultado deveria ser: %lf\n", resultado);
            }
        break;

        case '*':
            resultado = a*b;
            if(resultado == c){
                printf("CORRETO\n");
            }
            else{
                printf("ERRADO! O resultado deveria ser: %lf\n", resultado);
            }
        break;

        case '/':
            resultado = a/b;
            if(resultado == c){
                printf("CORRETO\n");
            }
            else{
                printf("ERRADO! O resultado deveria ser: %lf\n", resultado);
            }
        break;
    }

    return 0;

}