#include<stdio.h>

int main(){
	int a = 10;
	int h = 100;
	int t = 3;
	float height = a * t * t/2;
	if(height > h) height = h;
	else height = h - height;
	printf("height = %.2f",height);
	return 0;
}
