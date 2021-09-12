#include <stdio.h>

int main(){

    int numero, un, dz, ct, ml, dz_ml;
    
    scanf("%d", &numero);

    if(numero > 99999){
        printf("NUMERO INVALIDO\n");
    }
    else if(numero > 9999){
        dz_ml = (numero - numero%10000)/10000;
        ml = (numero - numero%1000)/1000 - dz_ml*10;
        ct = (numero - numero%100)/100 - (dz_ml*100 + ml*10);
        dz = (numero - numero%10)/10 - (dz_ml*1000 + ml*100 + ct*10);
        un = numero - (dz_ml*10000 + ml*1000 + ct*100 + dz*10);

        if(un==dz_ml && dz==ml) printf("PALINDROMO\n");
        else printf("NAO PALINDROMO\n");
    }
    else if(numero > 999){
        ml = (numero - numero%1000)/1000;
        ct = (numero - numero%100)/100 - ml*10;
        dz = (numero - numero%10)/10 - (ml*100 - ct*10);
        un = numero - (ml*1000 + ct*100 + dz*10);

        if(un==ml && dz==ct) printf("PALINDROMO\n");
        else printf("NAO PALINDROMO\n");
    }
    else if(numero > 99){
        ct = (numero - numero%100)/100;
        dz = (numero - numero%10)/10 - ct*10;
        un = numero - (ct*100 + dz*10);

        if(un==ct) printf("PALINDROMO\n");
        else printf("NAO PALINDROMO\n");
    }
    else if(numero > 9){
        dz = (numero - numero%10)/10;
        un = numero - dz*10;

        if(un==dz) printf("PALINDROMO\n");
        else printf("NAO PALINDROMO\n");
    }
    else{
        //Todo numero de um digito eh palindromo
        printf("PALINDROMO\n");
    }

    return 0;
}