#include <stdio.h>

int main(){
	char input[10];
	int letter = 0, blank = 0, digit = 0, other = 0;
	//��ȡ�����س� 
	//fgets(input, sizeof(input), stdin);
	int i ;
	for(i = 0; i < 10 ;i++){
		//getchar���Զ�ȡ�س� 
		char j = getchar();
		if((j >= 'a' && j <= 'z') || (j >= 'A' && j <= 'Z')){
			letter++;
		}else if(j == ' ' || j == '\n'){
			blank++;
		}else if(j >= '0' && j <= '9'){
			digit++;
		}else{
			other++;
		}
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
	return 0;
}
