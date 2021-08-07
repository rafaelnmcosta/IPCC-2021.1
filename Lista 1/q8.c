#include <stdio.h>

int main(){

    int horas, mins, segs;

    scanf("%d %d %d", &horas, &mins, &segs);

    mins = mins + horas*60;
    segs = segs + mins*60;

    printf("O TEMPO EM SEGUNDOS E = %d\n", segs);

    return 0;
}