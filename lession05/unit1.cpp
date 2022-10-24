#include <stdio.h>
int main(){
	int n;
    int x=0; 	
	do{
		printf("Enter a number other than 0: ");
		scanf("%d",&n);
	}while(n==0);
	printf("Divisors of %d are: ",n);
	for(int i=1;i<=n;i++){
		if(n%i==0){
			x+=i;
		printf("%3d",i);
	}
	}
	printf("\nSum of divisors of %d is: %d",n, x);
}
