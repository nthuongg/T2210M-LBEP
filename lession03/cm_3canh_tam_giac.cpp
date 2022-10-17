#include <stdio.h>
#include <math.h>
int main(){
	float a;
	printf("Pleasse input first number:");
	scanf ("%f",&a);
	float b;
    printf("Pleasse input second number:");
	scanf ("%f",&b);
	float c;
	printf("Pleasse input third number:");
	scanf ("%f",&c);
	if((a+b>c)&&(b+c>a)&&(c+a>b)){
		float p= (a+b+c)/2;
		float S= sqrt(p*(p-a)*(p-b)*(p-c));
		float C= a+b+c;
		printf ("dien tich tam giac la S=%f va chu vi tam giac la C=%f",S,C);
	}else{
		printf ("khong phai la 3 canh cua tam giac");
	}
}
