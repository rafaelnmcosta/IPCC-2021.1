#include <stdio.h>
#define NRO_PROVAS 8
#define NRO_LISTAS 5
#define CARGA_HORARIA 128

int main(){

    int i, matricula, aprovacao;
    double mp, ml, nt, nf, presenca, nota;
    
    /*
    * int aprovacao: guarda um valor que codifica em que o aluno reprovou ou não:
    *   aprovacao = 0 -> aluno aprovado;
    *   aprovacao = 1 -> aluno reprovado por nota;
    *   aprovacao = 2 -> aluno reprovado por falta;
    *   aprovacao = 3 -> aluno reprovado por nota e por falta;
    */

    while(1){
        
        scanf("%d ", &matricula);
        if(matricula<0) return 0;

        // zera as variaveis a cada vez que o programa roda;
        aprovacao=0;
        mp=0;
        ml=0;
        nt=0;

        for(i=0; i<NRO_PROVAS; i++){
            scanf("%lf ", &nota);
            mp+=nota;
        }
        mp /= NRO_PROVAS;

        for(i=0; i<NRO_LISTAS; i++){
            scanf("%lf ", &nota);
            ml+=nota;
        }
        ml /= NRO_LISTAS;

        scanf("%lf ", &nt);

        scanf("%lf", &presenca);

        nf = 0.7*mp + 0.15*ml + 0.15*nt;

        if(nf<6) aprovacao+=1;

        if(presenca<0.75*CARGA_HORARIA) aprovacao+=2;

        printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: ", matricula, nf);

        switch(aprovacao){
            case 0:
                printf("APROVADO\n");
            break;

            case 1:
                printf("REPROVADO POR NOTA\n");
            break;

            case 2:
                printf("REPROVADO POR FREQUENCIA\n");
            break;

            case 3:
                printf("REPROVADO POR NOTA E POR FREQUENCIA\n");
            break;
        }
    }
}