#include <stdio.h>

int main(){
	int a,b,c,d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int Sum = a+b+c+d;
	//这不转float或者直接用Sum就会使小数损失 
	float Average = (float)(a + b + c + d)/4;
	printf("Sum = %d; Average = %.1f", Sum, Average);
	return 0;
}
