#include <stdio.h>
//c语言中没有bool类型，c++才有，需要加入头文件才能使用布尔类型
//而且c里面的true是1，false是0，实际上也可以直接define，然后bool定义char 
#include <stdbool.h>

int main(){
	int l;
	int u;
	scanf("%d %d", &l, &u);
	if(l>u){
		printf("Invalid.\n");
	}else{
		printf("fahr celsius\n");
		bool flag = true;
		while(flag){
			float f = l;
			float c = 5*(f-32)/9;
			if(l<10){
				printf("%d    %.1f\n",l,c);
			}else{
				printf("%d   %.1f\n",l,c);
			}
			l += 2;
			if(l > u) break;
			
		}
		
	}
	return 0;
}
