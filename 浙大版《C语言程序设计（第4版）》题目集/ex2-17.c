#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d",&n);
	int i;
	for(i = 0; i <= n; i++){
		//double������%d�����%.f�����ȥ��С��������� 
	
		printf("pow(3,%d) = %.f\n",i ,pow(3,i));
	}
	return 0;
}
