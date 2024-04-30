#include <stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	int i;
	float j = 1;
	float sum = 0;
	for(i = 1; i <= N; i++){
		float k = i;
		if((i%2) == 1){
			sum += (k/j);
		}else{
			sum -= (k/j);
		} 
		j += 2;
	}
	printf("%.3f", sum);
	return 0;
} 
