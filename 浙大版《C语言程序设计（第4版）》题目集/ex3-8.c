#include <stdio.h>

int main(){
	printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
	int i;
	for(i = 0; i < 10; i++){
		char j;
		scanf("%c",&j);
		//printf("%c", j);
		//读字符的时候有个大问题就是读回车的问题 ,我这里用判断读取空格来排除空格，相对的for的次数要增加 ，但回车依旧不能读取
		//或者使用getchar来读取 
		switch(j){
			//不加continue或者break，后面的printf都会输出 
			case '1': printf("price = 3.00\n");break;
			case '2': printf("price = 2.50\n");break;
			case '3': printf("price = 4.10\n");break;
			case '4': printf("price = 10.20\n");break;
			case '0': return 0;
			//这个\n不能去掉，因为我将for设置为了10次，而它实际上包括空格他是9次，最后一次是回车 
			case '\n': break;
			case ' ': break; 
			//实际上可以用return 0来作为跳出全部的办法，但这里的default还需要考虑空格或者回车作为五个输入中的异常输入
			//而我实际上还需要判断两个输入之间的空格，我没能考虑到空格或者回车作为五个异常输入中的内容 
			default: printf("price = 0.00\n");return 0;
		}
		//而switch内的break不能帮助我跳出循环 ，它只能跳出switch ， 
		//if(j != '1' || j != '2' || j != '3' || j != '4' || j != ' ' || j != '\n') break;
		//理论上使用getchar这个就可以使用 
	}
	return 0;
}
