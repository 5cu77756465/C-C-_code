#include <stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	float sum = 0;
	//�����ҷ���forѭ���в���ֱ��int����Ҫ������int��������forѭ���� 
	int i;
	for(i = 1; i <= N;i++){
		float j = ((i-1)*3+1);
		if((i%2) == 1){
			sum += (1/j);
		}else{
			sum -= (1/j);
		}

	}
	
	printf("sum = %.3f\n", sum);
	return 0;
}
