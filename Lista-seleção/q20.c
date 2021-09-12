#include <stdio.h>

int main(){

    double renda;
    int qtd_pessoas_familia, tipo_escola, etnia, x;
    /*
        tipo_escola: (1 - particular; 2 - pública)
        etnia: (1 – preto; 2 – pardo; 3 – indígena; 4 – branco)
    */

    scanf("%lf %d %d %d", &renda, &qtd_pessoas_familia, &tipo_escola, &etnia);

    if(tipo_escola == 1){
        printf ("ALUNO NAO COTISTA\n");
        return 0;
    }

    renda /= qtd_pessoas_familia;
    
    if(renda > 1405.5){
        if(etnia != 4) x=4;
        else x=3;
    }
    else{
        if(etnia != 4) x=2;
        else x=1;
    }

    printf ("ALUNO COTISTA (L%d)\n", x);

    return 0;

}