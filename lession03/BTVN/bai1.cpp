#include <stdio.h>
int main(){
	float doanhso;
	printf("Doanh so ban hang la: ");
	scanf("%f", &doanhso);
	float hoahong;
	if(doanhso<=100){
		hoahong = (5* doanhso)/100;
	}else{
		if(doanhso<=300){
			hoahong= (10*doanhso)/100;
		}else{
			hoahong= (20*doanhso)/100;
		}
	}
	printf("Hoa hong dai ly ban nhan duoc la: %f trieu", hoahong);

}
