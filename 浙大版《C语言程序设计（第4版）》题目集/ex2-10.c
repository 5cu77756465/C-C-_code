#include<stdio.h>

float f(float x){
	if(x == 0) {
		return x;
	}else {
		//printf("%f\n",x);
		x = 1 / (float)x;
		return x;
	}
}

int main(){
	//x为int时，输入为10，输出为0，我在想是不是float转为int类型或者int转float类型会有问题 
	//int x;
	float x;
	//如果x为int，那么问题可能出在scanf中的%f 
	//我找不出了，现在有点混乱 
	scanf("%f",&x);
//	printf("%f\n",x);  
	printf("%.1f\n",f(x));
	return 0;
}

