#include <stdio.h>

int main(){
	int a;
	int b;
	int x;
	int y;
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	x = a;
	y = b;
			
	while (a*b != 0) {
		if (a > b) {
			a = a % b;
		} else {
			b = b % a;
		}
	}
	
	printf("ucln la %d \n", a + b);
	printf("bcnn la %d \n", x*y/(a + b));
}
