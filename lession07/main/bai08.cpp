#include "baitap.h"
int main(){
	int n;
	printf("Enter a positive integer: ");
	scanf("%d",&n);
	if(kiemtra (n)){
		printf("Cac chu so cua %d giam dan tua trai sang phai",n);
	}else{
		printf("Cac chu so cua %d khong giam dan tu trai sang phai",n);
	}
}
