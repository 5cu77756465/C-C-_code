#include <stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	float sum = 0;
	//这里我发现for循环中不能直接int，需要在外面int，才能在for循环用 
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
