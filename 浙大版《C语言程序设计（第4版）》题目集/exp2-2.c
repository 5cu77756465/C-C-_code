#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	if(n < 0){
		printf("Invalid Value!");
	}else{
		float cost = 0;
	if(n > 50){
		cost += (n - 50)*0.58;
		cost += 50*0.53;
	}else{
		cost += n*0.53;
	}
	
	printf("cost = %.2f", cost);
	}
	return 0;
} 
