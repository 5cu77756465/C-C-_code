#include <stdio.h>

int main(){
	int m,n;
	scanf("%d %d", &m, &n);
	float sum = 0;
	for(; m <= n; m++){
		float i = m;
		sum += (i*i + 1/i);
	}
	//�����ֳ����˽����һ��������5 10������sum = 355.845635 
	printf("sum = %.6f", sum);
	return 0;
}
