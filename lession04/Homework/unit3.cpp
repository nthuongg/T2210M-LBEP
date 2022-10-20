#include <stdio.h>
int main(){
	int n;
	printf(" Nhap n=");
	scanf("%d",&n);
	int count=0;
	if(n<2){
		printf("n khong phai la so nguyen to");
	}else{
		int i=1;
		while(i<=n){
			if(n%i==0){
				count++;
			}
			i++;
		}
		if(count==2){
			printf("%d la so nguyen to",n);
		}else{
			printf("%d khong phai la so nguyen to",n);
		}
	}
	
}
