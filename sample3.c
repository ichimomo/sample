#include <stdio.h>

int main(void){
	int i;
	int j;
	for(i=0; i<10; i++){
		j = i++;
	}
	printf("sum is %d.\n",j);
	
	return 0;
}