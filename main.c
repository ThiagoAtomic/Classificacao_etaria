#include <stdio.h>
#include <locale.h>

//Verificar em que classificação etária esta pessoa se encontra e mostrar na tela.
//faixas etárias: de 0 a 15 – Criança; de 16 a 21-Adolescente; de 22 a 59-Adulto; igual ou maior a 60 anos – Terceira idade.

int main(void) 
{
	setlocale(LC_ALL, "Portuguese");
	int idade;
	printf("\nEntre com a idade: ");
	scanf("%d", &idade);
	if (idade >= 0 ,idade < 16)
	printf("\n É uma Criança ");
	else if (idade >= 16 ,idade <22)
	printf("\n É um Adolescente");
	else if (idade >= 22 ,idade < 60)
	printf("\n É um Adulto");
	else
	printf("\n É terceira Idade");
	printf("\n Este comando está fora da cadeia de ifs");
	return 0;
}
