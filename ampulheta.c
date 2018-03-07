#include<stdio.h>

int base(int largura)
{
	int i,limite;
	limite= largura/2 +2;
	printf("**");
	for (i=0; i < limite; i++)
	{
		printf(" *");
	}
	printf("*\n");
}
int meio(int largura)
{
	int i,larguratotal,espaco,largurapequena;
	espaco= 1+(largura-2)*2;
	larguratotal= largura/2 +2;
	largurapequena= (espaco-larguratotal)/2 ;
	printf("*");
	for (i = 0; i < largurapequena; i++)
	{
		printf("_");
	}
	printf("*");
	for (i = 0; i < espaco; ++i)
	{
		printf("_");
	}
	printf("*");
	for (i = 0; i < largurapequena; ++i)
	{
		printf("_");
	}
	printf("*\n");
}

int main()
{
	int x,y,z,v;
	scanf("%d%d%d%d",&x,&y,&z,&v);
	base(x);
	meio(y);
	meio(z);
	meio(v);
    return 0;

}