#include <stdio.h>

int main(){

    int NS, UF, BC1d, BC2d, aux;

    scanf("%d %d", &NS, &UF);

    if(UF == 0 || UF > 28){
        printf("CODIGO DA UF INVALIDO!");
        return 0;
    }

    //     8° digito         7° digito               6° digito.....
    BC1d = (NS%10)*9 + ((NS%100-NS%10)/10)*8 + ((NS%1000-NS%100)/100)*7 + ((NS%10000-NS%1000)/1000)*6 + ((NS%100000-NS%10000)/10000)*5 + ((NS%1000000-NS%100000)/100000)*4 + ((NS%10000000-NS%1000000)/1000000)*3 + ((NS%100000000-NS%10000000)/10000000)*2;
    
    BC1d = BC1d%11;

    if(BC1d == 10) BC1d = 0;

    aux = UF*10 + BC1d; //Cria o numero de 3 digitos para o calculo da BC2d;
    
    //     3° digito           2° digito                  1° digito
    BC2d = (aux%10)*9 + ((aux%100-aux%10)/10)*8 + ((aux%1000-aux%100)/100)*7;

    BC2d = BC2d%11;

    if(BC2d == 10) BC2d = 0;

    printf("%d", NS); //Primeira parte do numero do titulo

    if(UF<10) printf("0"); //Adiciona 0 se a UF só tiver um digito

    printf("%d/%d%d\n", UF, BC1d, BC2d); //Restante do numero do titulo

    return 0;
}