#include <stdio.h>
//Bai 1: Tinh chu vi tam giac
int chuvi(int x, int y, int z){
	int c= x+ y+ z;
	return c;
	
}


//Bai 2: Tinh dien tich
#include <math.h>
float dientich(int x, int y, int z){
	float p=(x+ y+ z)/2;
	float s=sqrt(p*(p- x)*(p- y)*(p- z));
	return s;
		
}


//Bai 3: Tinh tong cac chu so cua so nguyen n
int tinhtong(int n){
	int s=0;
	while (n!=0){
		s+=n%10;
        n=n/10;
    }
    return s;
}


//Bai 4: Tim ucln
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


//Bai 5: Tim bcnn
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


//Bai 6: Kiem tra so chinh phuong
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


//Bai 7: Tim so nguyen duong nho nhat sao cho 1 + 2 + … + n > 10000
int SNDmin (int n=1, int s=0){
	
	while(s<=10000){
		n++;
		s+=n;
	
	}
	return n;
}

//Bai 8: Kiem tra cac chu so cua so nguyen duong n có giam dan tu trai sang phai hay không
bool kiemtra (int n){
	int x=n;
	int socuoi = x%10;
	while (x!=0){
		int sogancuoi= x%10;
		x=x/10;
		if(socuoi>sogancuoi){
			return false;
		}
	}
	return true;
}
















