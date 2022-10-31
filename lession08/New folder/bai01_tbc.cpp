#include <stdio.h>
int main(){
	int n;
	scanf ("%d",&n);
	int ary[n];
	int i;
	for(i= 0; i< n; i++){
		scanf("%d", &ary[i]);
	}
	int s=0;
	int d=0;
	for(i= 0; i<n; i++){
		if(ary[i]%2 !=0){
			s+=ary[i];
			d++;						
		}
	}
	float tbc= 1.0*s/d;
	printf("tbc= %f",tbc);
	
}
