#include <stdio.h>
#include <stdbool.h>

int main(){
	int Y;
	scanf("%d", &Y);
	if(Y <= 2000 || Y > 2100){
		printf("Invalid year!");
	}else{
		int i;
		bool flag = true;
		for(i = 2001;i <= Y; i++){
			if((i%4 == 0) && (i%100 != 0) && (i%400 != 0)){
				printf("%d\n", i);
				flag = false;
			}
		}
		if(flag == true) printf("None");
	}
	return 0;
}
