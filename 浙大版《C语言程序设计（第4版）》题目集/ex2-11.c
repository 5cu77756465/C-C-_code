#include <stdio.h>
#include <math.h>

float f(float x){
	if(x >= 0){
		x = sqrt(x);
	}else{
		x = (x+1)*(x+1)+2*x+1/x;
	}
	return x;
}

int main(){
	float x;
	scanf("%f",&x);
	printf("f(%.2f) = %.2f\n", x, f(x));
	return 0;
} 
