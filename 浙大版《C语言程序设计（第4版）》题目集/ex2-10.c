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
	//xΪintʱ������Ϊ10�����Ϊ0���������ǲ���floatתΪint���ͻ���intתfloat���ͻ������� 
	//int x;
	float x;
	//���xΪint����ô������ܳ���scanf�е�%f 
	//���Ҳ����ˣ������е���� 
	scanf("%f",&x);
//	printf("%f\n",x);  
	printf("%.1f\n",f(x));
	return 0;
}

