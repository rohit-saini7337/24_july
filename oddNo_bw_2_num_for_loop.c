#include<stdio.h>
int main(){
	int a,b;
	printf("enter 1 number");
	scanf("%d",&a);
	printf("enter 2 number");
	scanf("%d",&b);

	
	for( ;a<=b;a++){
		if(a%2!=0){
			printf("%d",a);
		}
		printf("\n");
	}
}
