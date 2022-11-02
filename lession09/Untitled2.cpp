#include <stdio.h>
#include <string.h>
int main(){
    char s[50]; 	
	printf("nhap chuoi: ");
	scanf("%s",s);
	int x=0;
	int y=0;
	for(int i=0; i< strlen(s); i++){
		if(s[i]=='u' || s[i]=='e' || s[i]=='o' || s[i]=='a' || s[i]=='i'){
			x++;			
		}else{
			y++;
		}
	}
	printf("So nguyen am la: %d",x);
	printf("\nSo phu am la %d",y);
}

