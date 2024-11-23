#include<stdio.h>

int main(){
	int num1, num2, num3;
	printf("Ban hay nhap vao so nguyen thu nhat: \n");
	scanf("%d",&num1);
	printf("Ban hay nhap vao so nguyen thu hai: \n");
	scanf("%d",&num2);
	printf("Ban hay nhap vao so nguyen thu ba: \n");
	scanf("%d",&num3);
	
	if(num1<num3 && num3<num2){
		printf("%d nam trong khoang %d va %d\n",num3, num1, num2);
	}else{
		printf("%d khong nam trong khoang %d va %d\n",num3, num1, num2);
	}
	return 0;
}