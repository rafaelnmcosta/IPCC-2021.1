#include <stdio.h>
 
int main(){
 
    int n, x, y;
 
    scanf("%d", &n);
 
    // (1,1) sempre são reversíveis
    x=1;
    y=1;
    
    while(x<=n){
        while(y<n){
            if((x*y)==1 || (x*y)%n==1){
                if(x<=y){
                    printf("(%d,%d)\n", x, y);
                }
            }
            y++;
        }
        if(y==n) y=1;
        x++;
    }
 
    return 0;
}