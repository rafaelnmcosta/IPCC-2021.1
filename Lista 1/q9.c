#include <stdio.h>

int main(){
    float nro, nro_com_1_casa, nro_com_2_casas, nro_com_3_casas;
    int nro_aux;

    scanf("%f", &nro);

    nro_com_1_casa = nro*100;   //ajusta o numero no formato xxx.xx
    nro_aux = nro*10;           //cria um auxiliar no formato xx.000
    nro_aux = nro_aux*10;       //ajusta o auxiliar para xx0.00

    if(nro_com_1_casa - nro_aux < 5){   //verifica a subtração (xxx - xx0) para arredondar
        nro_com_1_casa = nro_aux/10;    //se arredonda pra baixo, ajusta pro formato xx.000
    } else{
        nro_com_1_casa = (nro_aux+10)/10;   //se arredonda pra cima, aumenta xxx+10 e depois passa pro formato xx.000
    }
    nro_com_1_casa = nro_com_1_casa/10; //ajusta para uma casa decimal arredondada: x.x0000

    //A lógica para os demais arredondamentos é a mesma, só altera a quantia de casas de decimais percorridas
    nro_com_2_casas = nro*1000;
    nro_aux = nro*100;
    nro_aux = nro_aux*10;
    if(nro_com_2_casas - nro_aux < 5){
        nro_com_2_casas =  nro_aux/10;
    }
    else{
        nro_com_2_casas = (nro_aux+10)/10;
    }
    nro_com_2_casas = nro_com_2_casas/100;

    nro_com_3_casas = nro*10000;
    nro_aux = nro*1000;
    nro_aux = nro_aux*10;
    if(nro_com_3_casas - nro_aux < 5){
        nro_com_3_casas =  nro_aux/10;
    }
    else{
        nro_com_3_casas = (nro_aux+10)/10;
    }
    nro_com_3_casas = nro_com_3_casas/1000;

    printf("%.6f\n%.6f\n%.6f\n", nro_com_1_casa, nro_com_2_casas, nro_com_3_casas);

    return 0;
}