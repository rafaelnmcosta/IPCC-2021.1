#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int num_likes;
	int num_retweets;
	int num_mencoes;
} INTERACAO;

INTERACAO *** cria_matriz(int); //Tres asteriscos pois: aponta para um vetor de vetores de ponteiros de interacoes
void preenche_matriz(INTERACAO***, int);
void destroi_matriz(INTERACAO***, int);

int main(){

	int i, j, n, m, cont_vazio, cont_lks, cont_rts, cont_mcs, total=0;
	float media_lks=0, media_rts=0, media_mcs=0;

	INTERACAO*** mat;

	scanf("%d", &n);

	mat = cria_matriz(n);

	scanf("%d", &m);

	preenche_matriz(mat, m);

	for(i=0; i<n; i++){
		cont_lks = cont_rts = cont_mcs = 0;

		for(j=0; j<n; j++){
			if(mat[i][j]!=NULL){
				cont_lks += (*mat[i][j]).num_likes;
				cont_rts += (*mat[i][j]).num_retweets;
				cont_mcs += (*mat[i][j]).num_mencoes;
			}
			else cont_vazio++;
		}
		if(cont_lks!=0 || cont_rts!=0 || cont_mcs!=0){
			printf("Usuario %d - num. likes: %d, num. retweets: %d e num. mencoes: %d\n", i, cont_lks, cont_rts, cont_mcs);
			total++;
			media_lks += cont_lks;
			media_rts += cont_rts;
			media_mcs += cont_mcs;
		}
	}

	media_lks /= total;
	media_rts /= total;
	media_mcs /= total;

	printf("Slots vazios: %d\n", cont_vazio);
	printf("Media de likes por usuario: %.2f\n", media_lks);
	printf("Media de retweets por usuario: %.2f\n", media_rts);
	printf("Media de mencoes por usuario: %.2f\n", media_mcs);

	destroi_matriz(mat, n);
	return 0;
}

INTERACAO *** cria_matriz(int n){
	
	int i;
	INTERACAO *** mat = NULL;
	mat = (INTERACAO***) calloc(n, sizeof(INTERACAO**)); //aloca n vetores de ponteiros

	for(i=0; i<n; i++){
		mat[i] = (INTERACAO**) calloc(n, sizeof(INTERACAO*)); //aloca n ponteiros a cada posicao do vetor
	}

	return mat;
}

void preenche_matriz(INTERACAO*** mat, int m){

	int i, j, cont;

	for(cont=0; cont<m; cont++){
		scanf("%d %d", &i, &j);
		mat[i][j] = (INTERACAO*) malloc(sizeof(INTERACAO));
		scanf("%d %d %d", &((*mat[i][j]).num_likes), &((*mat[i][j]).num_retweets), &((*mat[i][j]).num_mencoes)); 
	}
}

void destroi_matriz(INTERACAO*** mat, int n){
	int i, j;

	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			free(mat[i][j]);
		}
		free(mat[i]);
	}
	free(mat);
}
