#include "baitap.h"

int main(){
    int n ;
    printf("Enter a positive integer: ");
	scanf("%d",&n);
	if (sochinhphuong(n)){
		printf("%d is a perfect square",n);
	}else{
		printf("%d is not perfect square",n);
	}
}
