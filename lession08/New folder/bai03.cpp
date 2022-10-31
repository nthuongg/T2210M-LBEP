#include <stdio.h>
int main(){
	int n;
    scanf ("%d",&n);
    int ary[n];
	int i;
	for(i= 0; i< n; i++){
		scanf("%d", &ary[i]);
	}    
    int x;
    printf("Enter x: ");
    scanf("%d",&x);
    for (i=0; i<n; i++){
    	if(x==i){
    		printf ("%d co trong mang",x);
		}
	}
	printf("%d khong co trong mang",x);
}

