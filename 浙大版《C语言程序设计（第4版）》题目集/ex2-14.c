#include <stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	float sum = 0;
	//�����ҷ���forѭ���в���ֱ��int����Ҫ������int��������forѭ���� 
	int i;
	N *= 2;
	N -= 1;
	for(i = 1; i <= N;){
		float j = i;
		sum += (1/j);
		i += 2;
	}
	//�и����ʵ㣬������23���������sum = 2.549542��������sum = 2.549541 
	printf("sum = %.6f\n", sum);
	return 0;
}
