#include <stdio.h>
int sodaonguoc(int n){
	int x=0;
	while(n!=0){
		x=x*10+n%10;
		n=n/10;
	}
	return x;	
}
int main(){
	int n=1234;
	int a=sodaonguoc(n);
	printf("So dao nguoc la %d",a);
}



