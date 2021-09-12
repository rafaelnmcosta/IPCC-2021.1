#include <stdio.h>

int main(){
	double n1, n2, n3, media;

	scanf("%lf %lf %lf", &n1, &n2, &n3);

	media = (n1+n2+n3)/3;
	
	printf("MEDIA = %.2lf\n", media);

	if(media<6){
		printf("REPROVADO\n");
	}
	else{
		printf("APROVADO\n");
	}
	
	return 0;
}
