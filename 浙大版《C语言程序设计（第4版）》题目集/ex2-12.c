#include <stdio.h>
//c������û��bool���ͣ�c++���У���Ҫ����ͷ�ļ�����ʹ�ò�������
//����c�����true��1��false��0��ʵ����Ҳ����ֱ��define��Ȼ��bool����char 
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
