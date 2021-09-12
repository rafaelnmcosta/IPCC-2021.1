#include <stdio.h>

int main(){

    int n, i;
    double fahren, celsius;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%lf", &fahren);

        celsius = (5*(fahren-32))/9;

        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", fahren, celsius);
    }

    return 0;
}