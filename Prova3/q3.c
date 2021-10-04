#include <stdio.h>
#include <string.h>
#define MAX 256

/**
 * @brief Funcao que remove vogais e calcula a quantidade de vogais removidas;
 * 
 * @param str string de entrada;
 * @param vogais vetor de 5 posicoes que contabiliza a quantidade de vogais removidas;
 * @return A funcao atualiza os valores str e vogais;
 */
void remove_vogais(char *str, int *vogais);

int main(){

    int vogais[5]={0,0,0,0,0};
    char str[MAX];

    scanf("%[^\n]", str);

    remove_vogais(str, vogais);

    printf("%s\na: %d\ne: %d\ni: %d\no: %d\nu: %d\n", str, vogais[0], vogais[1], vogais[2], vogais[3], vogais[4]);
    
    return 0;
}

void remove_vogais(char *str, int *vogais){

    char strAux[MAX];
    int i=0, j=0;

    //Percorre a string original ate o final procurando por vogais, se o char atual for consoante, copia ele para uma string auxiliar;
    //tambem aumenta os valores no vetor de vogais se o char atual for uma;
    while(str[i]!='\0'){

        if(str[i]=='a' || str[i]=='A'){
            vogais[0]++;
        }
        else if(str[i]=='e' || str[i]=='E'){
            vogais[1]++;
        }
        else if(str[i]=='i' || str[i]=='I'){
            vogais[2]++;
        }
        else if(str[i]=='o' || str[i]=='O'){
            vogais[3]++;
        }
        else if(str[i]=='u' || str[i]=='U'){
            vogais[4]++;
        }
        else{
            strAux[j]=str[i];
            j++;
        }
        i++;
    }

    //Define o final da string auxiliar;
    strAux[j]='\0';

    //Copia a string auxiliar para dentro da string original
    i=0;
    while(strAux[i]!='\0'){
        str[i] = strAux[i];
        i++;
    }

    //Define o final da string original
    str[i]='\0';
}