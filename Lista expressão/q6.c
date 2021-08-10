#include <stdio.h>

int main(){
    float n1, n2, media;

    scanf("%f %f", &n1, &n2);

    media = (n1+n2)/2;

    printf("%.3f", media);

    return 0;
}