#include <stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	float sum = 0;
	//�����ҷ���forѭ���в���ֱ��int����Ҫ������int��������forѭ���� 
	int i;
	for(i = 1; i <= N; i++){
		float j = i;
		sum += (1/j);
	}
	printf("sum = %.6f\n", sum);
	return 0;
}
