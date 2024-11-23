#include<stdio.h>

int main(){
	int num;
	printf("Moi ban nhap vao mot so ");
	scanf("%d",&num);
	if(num<0){ printf("Day la so am");
	}else{ printf("Day la so duong");
	}
	return 0;
}