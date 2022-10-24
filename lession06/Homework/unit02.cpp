#include <stdio.h>
int solonnhat(int a, int b, int c){
	if(a>b && a>c){
		return a;
	}else{
		if(b>a && b>c){
			return b;
		}
		return c;
	}
}
int main(){
	int a=13, b=15, c=25;
	int x=solonnhat(a, b, c);
	printf("so lon nhat la: %d",x);
}
