#include <stdio.h>
#include <string.h>
void chuyenchuoi(char s[]){
	int d= strlen(s);
	for(int i=0; i<d; i++){
		if(s[i]>=97 && s[i]<=122){
			s[i]-=32;
		}
	}
}
int main(){
	char arr[50];
	printf("nhap chuoi: ");
	scanf("%s",arr);
	chuyenchuoi(arr);
	printf("in hoa la %s ",arr);
}
