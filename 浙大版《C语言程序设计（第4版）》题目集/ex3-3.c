#include <stdio.h>

int main(){
	int N;
	float sum = 0;
	int n;
	scanf("%d", &N);
	int i;
	int count = 0;
	for(i = 0; i < N; i++){
		scanf("%d", &n);
		sum += n;
		if(n >= 60) count++;
	}
	sum /= N;
	printf("average = %.1f\n", sum);
	printf("count = %d\n", count);
	return 0;
	
}
