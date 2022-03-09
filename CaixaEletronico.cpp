#include <stdio.h>
#include <stdlib.h>
main(){
	int x, q100, q50, q20, q10, q5, q2;
	printf("Qual a quantia?");
	scanf("%d",&x);
	q100 = x/100;
	if(q100>0){
		printf("Quantidade de cedulas de 100 reais = %d\n",q100);
	}
	x=x%100;
	q50 = x/50;
	if(q50>0){
		printf("Quantidade de cedulas de 50 reais = %d\n",q50);
	}
	x=x%50;
	q20 = x/20;
	if(q20>0){
		printf("Quantidade de cedulas de 20 reais = %d\n",q20);
	}
	x=x%20;
	q10 = x/10;
	if(q10>0){
		printf("Quantidade de cedulas de 10 reais = %d\n",q10);
	}
	x=x%10;
	q5 = x/5;
	if(q5>0){
		printf("Quantidade de cedulas de 5 reais = %d\n",q5);
	}
	x=x%5;
	q2 = x/2;
	if(q2>0){
		printf("Quantidade de cedulas de 2 reais = %d\n",q2);
	}
	x=x%2;
	if(x>0){
		printf("Quantidade de moedas de 1 real = %d\n",x);
	}
	system("pause");
}
