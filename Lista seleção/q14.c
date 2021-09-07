#include <stdio.h>

int main(){

    int data, dia, mes, ano;

    scanf("%d", &data);
    dia = data/1000000;
    mes = (data - dia*1000000)/10000;
    ano = data - ((data/10000) * 10000);

    if(dia<=0 || dia>31 || mes<=0 || mes>12 || (mes==2 && dia>28) || ((mes==4 || mes==6 || mes==9 || mes==11) && dia>30)){
        printf("Data invalida!\n");
        return 0;
    }

    printf("%d de ", dia);

    switch(mes){
        case 1:
            printf("janeiro");
        break;

        case 2:
            printf("fevereiro");
        break;

        case 3:
            printf("março");
        break;

        case 4:
            printf("abril");
        break;

        case 5:
            printf("maio");
        break;

        case 6:
            printf("junho");
        break;

        case 7:
            printf("julho");
        break;

        case 8:
            printf("agosto");
        break;

        case 9:
            printf("setembro");
        break;

        case 10:
            printf("outubro");
        break;

        case 11:
            printf("novembro");
        break;

        case 12:
            printf("dezembro");
        break;
    }

    printf(" de %d\n", ano);

    return 0;
}