#include <stdio.h>
int main() {
	int i, num, sum=0, mul=0;
	
	scanf("%d", &num);
	
	for(i=1; i<num; i++) {
		mul=num%i;
		if(mul==0) {
			sum+=i;
		}
	}
	if(sum==mul){
		printf("No es perfecto");
	}
	else
	printf("Es perfecto");
	return 0;
}
