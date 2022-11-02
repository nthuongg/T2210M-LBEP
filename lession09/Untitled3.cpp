#include <stdio.h>
#include <string.h>
int main(){
    char s1[50],s2[50];	
	printf("nhap chuoi s1: ");
	scanf("%s",s1);
	printf("nhap chuoi s2: ");
	scanf("%s",s2);
	int d= strlen(s2);
	bool found=false;
    for(int i=0; i<=d; i++){
    	if(strchr(s1,s2[i])){
    		found= true;
		}else{
 	    found=false;
		break;
	    }  
    }
    	if(found== true){
		printf("s2 nam trong s1");
	}else{
		printf("s2 khong nam trong s1");
	}
}

