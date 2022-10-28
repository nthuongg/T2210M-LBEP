#include "baitap.h"
int main(){
	int n;
	do{
		printf("Enter a positive integer: ");
    	scanf("%d",&n);
	}while(n<=0);

	printf("Sum of digits of %d is: %d", n, tinhtong(n));
}
