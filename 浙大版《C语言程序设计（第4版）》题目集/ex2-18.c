#include <stdio.h>

double fact(int n){
	int i;
	double j = 1;
	for(i = 1; i <= n; i++){
		j *= i;
	}
	return j;
}

int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	double r = fact(n)/(fact(m) * fact(n-m));
	int re = r;
	printf("result = %d", re);
	return 0;
} 
