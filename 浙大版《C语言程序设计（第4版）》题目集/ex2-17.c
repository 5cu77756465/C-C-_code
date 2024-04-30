#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d",&n);
	int i;
	for(i = 0; i <= n; i++){
		//double不能用%d输出，%.f是输出去掉小数点后内容 
	
		printf("pow(3,%d) = %.f\n",i ,pow(3,i));
	}
	return 0;
}
