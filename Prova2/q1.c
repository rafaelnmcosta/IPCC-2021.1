#include <stdio.h>
 
int main(){
 
    int n, d1, d2, i = 0;
 
    scanf("%d", &n);
 
    if(n<3 || n>11){
        printf("Combinacao impossivel\n");
        return 0;
    }
 
    d1 = 1;
    d2 = n-d1;
    while(d1<=6 && d1<n){
        if(d1==d2 || d2>6){
            d1++;
            d2 = n-d1;
        }
        else{
            printf("D1: %d, D2: %d\n", d1, d2);
            d1++;
            d2 = n-d1;
            i++;
        }
    }
 
    printf("Ha %d possibilidades\n", i);
 
    return 0;
}