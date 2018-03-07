#include <stdio.h>
#include <string.h>

float adicao(float a, float b)
{
	float soma;
	soma= a+b;
	return soma;
}
float subtracao(float a, float b)
{
	float sub;
	sub= a-b;
	return sub;
}
float mult(float a, float b)
{
	float mult;
	mult = a*b;
	return mult;
}
float divisao(float a, float b)
{
	float divisao;
	divisao = a/b;
	return divisao;
}

int main()
{
	char a[1000];
	float x,y,soma,sub,mul,div;
	scanf("%f%f\n",&x,&y);

	scanf(" %c", &a);
	if (strcmp(a,"+")==0)
	{
		soma = adicao(x,y);
		printf("%.2f\n", soma);
	}
	else if (strcmp(a,"*")==0)
	{
		mul = mult(x,y);
		printf("%.2f\n",mul);
	}
	else if (strcmp(a,"-")==0)
	{
		sub = subtracao(x,y);
		printf("%.2f\n",sub);
	}
	else if (strcmp(a,"/")==0)
	{
		div = divisao(x,y);
		printf("%.2f\n",div);
	}

	return 0;
}