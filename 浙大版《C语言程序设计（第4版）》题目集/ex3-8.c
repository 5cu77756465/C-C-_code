#include <stdio.h>

int main(){
	printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
	int i;
	for(i = 0; i < 10; i++){
		char j;
		scanf("%c",&j);
		//printf("%c", j);
		//���ַ���ʱ���и���������Ƕ��س������� ,���������ж϶�ȡ�ո����ų��ո���Ե�for�Ĵ���Ҫ���� �����س����ɲ��ܶ�ȡ
		//����ʹ��getchar����ȡ 
		switch(j){
			//����continue����break�������printf������� 
			case '1': printf("price = 3.00\n");break;
			case '2': printf("price = 2.50\n");break;
			case '3': printf("price = 4.10\n");break;
			case '4': printf("price = 10.20\n");break;
			case '0': return 0;
			//���\n����ȥ������Ϊ�ҽ�for����Ϊ��10�Σ�����ʵ���ϰ����ո�����9�Σ����һ���ǻس� 
			case '\n': break;
			case ' ': break; 
			//ʵ���Ͽ�����return 0����Ϊ����ȫ���İ취���������default����Ҫ���ǿո���߻س���Ϊ��������е��쳣����
			//����ʵ���ϻ���Ҫ�ж���������֮��Ŀո���û�ܿ��ǵ��ո���߻س���Ϊ����쳣�����е����� 
			default: printf("price = 0.00\n");return 0;
		}
		//��switch�ڵ�break���ܰ���������ѭ�� ����ֻ������switch �� 
		//if(j != '1' || j != '2' || j != '3' || j != '4' || j != ' ' || j != '\n') break;
		//������ʹ��getchar����Ϳ���ʹ�� 
	}
	return 0;
}
