#include <stdio.h>
float tinhtong(int n){
	float s=0;
	for( int i=1; i<=n; i++){
		s+=1.0/i;
    }
    return s;
}
int main(){
	float x= tinhtong(5);
	printf("Tong= %f",x);
}


