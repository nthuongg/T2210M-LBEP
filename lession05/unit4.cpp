#include <stdio.h>
int main(){
	int n;
    do{
    	printf("Please enter a positive integer: ");
    	scanf("%d",&n);
	}while(n<0);
	while(n>10){
		int sd=n%10;
		n=n/10;
    }
    printf("The first digit is %d",n);
		
}
