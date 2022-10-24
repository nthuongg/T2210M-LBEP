#include <stdio.h>
int tinhtong(int n){
	int s=0;
	for(int i=1; i<=n; i++){
		s+=i;
	}
	return s;
}
int main(){
	int x= tinhtong(5);
	printf("Tong cac so la: %d",x);
}
