#include<stdio.h>

int main(){
	int num1, num2, num3;
	printf("Moi ban nhap vao so thu nhat\n");
	scanf("%d",&num1);
	printf("Moi ban nhap vao so thu hai\n");
	scanf("%d",&num2);
	printf("Moi ban nhap vao so thu ba\n");
	scanf("%d",&num3);
	
	if(num1<num2 && num2<num3){
		printf("Thu tu cac so tu nho den lon la: %d, %d, %d",num1,num2,num3);
	}else if(num2<num3 && num3<num1){
		printf("Thu tu cac so tu nho den lon la: %d, %d, %d",num2,num3,num1);
	}else if(num3<num2 && num2<num1){
		printf("Thu tu cac so tu nho den lon la: %d, %d, %d",num3,num2,num1);
	}else if(num3<num1 && num1<num2){
		printf("Thu tu cac so tu nho den lon la: %d, %d, %d",num3,num1,num2);
	}else if(num1<num3 && num3<num2){
		printf("Thu tu cac so tu nho den lon la: %d, %d, %d",num1,num3,num2);
	}else if(num2<num1 && num1<num3){
		printf("Thu tu cac so tu nho den lon la: %d, %d, %d",num2,num1,num3);
	}
	return 0;
}