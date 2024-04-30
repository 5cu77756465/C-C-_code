#include <stdio.h>

int main(){
	int m,n;
	scanf("%d %d", &m, &n);
	float sum = 0;
	for(; m <= n; m++){
		float i = m;
		sum += (i*i + 1/i);
	}
	//这里又出现了结果不一样，输入5 10，答案是sum = 355.845635 
	printf("sum = %.6f", sum);
	return 0;
}
