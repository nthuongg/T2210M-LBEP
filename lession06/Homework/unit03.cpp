#include <stdio.h>
int fibonaci(int n){
	int f0= 0;
	int f1= 1;
	int fn= 1;
	for(int i=3; i<=n; i++){
		f0=f1;
		f1=fn;
		fn=f0+f1;
	}
	return fn;
}
int main(){
	int x= fibonaci(8);
	printf("So thu 8 trong day fibonaci la: %d",x);
}
