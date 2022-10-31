#include <stdio.h>
int main(){
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int ary[n];
	int i;
	for(i= 0; i< n; i++){
		scanf("%d", &ary[i]);
	}
	for(i= (n-1); i>=0; i--){
		if(ary[i]%2!=0){
			printf("so le cuoi cung la %d",ary[i]);
			break;
			
		}
	}
}

