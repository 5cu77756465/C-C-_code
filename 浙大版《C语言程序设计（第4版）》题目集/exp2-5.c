#include <stdio.h>
#include <math.h>

int main(){
	int N;
	scanf("%d", &N);
	
	float sum = 0;
	int i;
	for(i = 1; i <= N; i++){
		sum += sqrt(i);
	}
	printf("sum = %.2f", sum);
	return 0;
}
