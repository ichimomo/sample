#include <stdio.h>

int main(void){
	int i;
	int j;
	int k;
	
	for(i=0; i<10; i++){
		j = i++;
		k = i--;
	}
	printf("sum is %d.\n",j);
	
	printf("Hello, FRA!\n");
	return 0;
}