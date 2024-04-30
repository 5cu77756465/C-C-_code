#include <stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	float sum = 0;
	//这里我发现for循环中不能直接int，需要在外面int，才能在for循环用 
	int i;
	N *= 2;
	N -= 1;
	for(i = 1; i <= N;){
		float j = i;
		sum += (1/j);
		i += 2;
	}
	//有个疑问点，我输入23，输出的是sum = 2.549542，而答案是sum = 2.549541 
	printf("sum = %.6f\n", sum);
	return 0;
}
