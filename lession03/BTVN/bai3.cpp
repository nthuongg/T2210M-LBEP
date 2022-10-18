#include <stdio.h>
int main(){
	float x;
	printf("Nhap diem bai kiem tra: ");
	scanf( "%f",&x);	
	float y;
	printf("Nhap diem thi giua ki: ");
	scanf( "%f",&y);
	float z;
	printf("Nhap diem thi cuoi ki: ");
	scanf("%f",&z);
	float tb;
	tb= (x+y+z)/3;
	if(tb>=9){
		printf("Hang A");
	}else{
		if(tb>=7){
			printf("Hang B");
		}else{
			if(tb>=5){
				printf("Hang C");
			}else{
				printf("Hang F");
			}
		}
	}
}
