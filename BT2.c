#include<stdio.h>

int main(){
	int num;
	printf("Moi ban nhap vao mot so: ");
	scanf("%d",&num);
	if(num % 2 == 0){ printf("Day la so chan");
	}else{ printf("Day la so le");
	}
	return 0;
}