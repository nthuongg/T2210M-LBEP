#include <stdio.h>
int main(){
	int ary[10];
	printf("Enter 10 integers\n");
	int i;
	for(i= 0; i< 10; i++){
        printf("a[%d]: ",i+1);
		scanf("%d", &ary[i]);
	}	
	printf("Display in the reversed order\n");
	for(int i=10-1; i>=0; i--){
	printf("%d\n",ary[i]);
	
    }
}
