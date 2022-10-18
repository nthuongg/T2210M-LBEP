#include <stdio.h>
int main(){
	float luong;
	printf("Nhap luong nhan vien: ");
	scanf("%f",&luong);
	float sothue;
	float luongrong;
	if(luong>=15){
		sothue= (luong*30)/100;
	}else{
		if(luong>=7){
			sothue= (luong*20)/100;
		}else{
			sothue= (luong*10)/100;
		}
	}
	luongrong= luong- sothue;
	printf("So thue thu nhap la: %f trieu\n",sothue);
	printf("So tien luong thuc su ma nhan vien do nhan duoc la: %f trieu",luongrong);
}
