#include <stdio.h>
int main(){
	int n;
	printf("Enter an integer: ");
	scanf("%d",&n);
	printf("Odd numbers less than n are: \n");
	int i=0;
	while(i< n){
		if(i%2 !=0){
		printf("%d\n",i);
	    } 
		i++;
	}
}
