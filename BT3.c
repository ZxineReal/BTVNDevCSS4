#include<stdio.h>

int main(){
	int num;
	printf("Moi ban nhap vao mot so ");
	scanf("%d",&num);
	
	if(num % 3 == 0 && num % 5 ==0){
		printf("Chia het cho ca 3 va 5");
	}else if(num%3==0){
		printf("Chia het cho 3");
	}else if(num%5==0){
		printf("Chia het cho 5");
	}else{
		printf("Khong chia het cho ca 3 va 5");
	}
	return 0;
}