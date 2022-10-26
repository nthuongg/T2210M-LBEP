#include <stdio.h>
//Tinh chu vi tam giac
int chuvi(int x, int y, int z){
	int c= x+ y+ z;
	return c;
	
}


//Tinh dien tich
#include <math.h>
float dientich(int x, int y, int z){
	float p=(x+ y+ z)/2;
	float s=sqrt(p*(p- x)*(p- y)*(p- z));
	return s;
		
}

// Tim ucln
int timUCLN(int a, int b){
	int min= a;
	if(b<a){
		min=b;
	}
	for(int i=min;i>1;i--){
		if(a%i==0 && b%i==0){
			return i;
		}
	}
}


//Tim bcnn
int timBCNN(int a, int b){
	int max= a;
	if(b>a){
		max= b;
	}
	for(int i= max; i>1; i++){
		if(i%a==0 && i%b==0){
			return i;
		}
	}
}


//Kiem tra so chinh phuong
#include <math.h>
bool sochinhphuong(int n){
	if(n<1){
		return false;
	}
	
	int i= sqrt(n);
	if(i*i==n){
		return true;
	}
	return false;
}


//Tim so nguyen duong nho nhat sao cho 1 + 2 + … + n > 10000
int SNDmin (int n=1, int s=0){
	
	while(s<=10000){
		n++;
		s+=n;
	
	}
	return n;
}







