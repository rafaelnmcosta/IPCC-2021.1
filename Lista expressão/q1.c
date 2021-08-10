#include <stdio.h>

int main(){
	float salario_minimo, kw_gastos, custo_kw, custo_consumo, custo_desconto;

	scanf("%f %f", &salario_minimo, &kw_gastos);

	custo_kw = 0.007*salario_minimo;
	custo_consumo = custo_kw*kw_gastos;
	custo_desconto = 0.9*custo_consumo;

	printf("Custo por kW: R$ %.2f\nCusto do consumo:  R$ %.2f\nCusto com desconto:  R$ %.2f", custo_kw, custo_consumo, custo_desconto);
	return 0;
}
