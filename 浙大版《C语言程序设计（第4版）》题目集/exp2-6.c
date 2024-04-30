#include <stdio.h>

int fact(int n){
	int i;
	int sum = 1;
	for(i = 1; i <= n; i++){
		sum *= i;
	}
	return sum;
}

int main(){
	int N;
	scanf("%d", &N);
	int i;
	int sum = 0;
	for(i = 1; i <= N; i++){
		sum += fact(i);
	}
	printf("%d", sum);
	return 0;
}
