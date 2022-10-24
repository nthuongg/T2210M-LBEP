#include <stdio.h>
int main(){
	int n;
    do{
    	printf("Please enter a number other than 0: ");
    	scanf("%d",&n);
	}while(n==0);

	int x=0;
	while(n!=0){
		int sd=n%10;
		x+=sd;
		n=n/10;
	}
	printf("The sum of the digits of %d is %d",n,x);
}
