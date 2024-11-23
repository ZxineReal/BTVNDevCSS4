#include<stdio.h>

int main(){
	float cu, moi,tienDien;
	printf("Moi ban nhap vao so dien cu: \n");
	scanf("%f",&cu);
	printf("Moi ban nhap vao so dien moi: \n");
	scanf("%f",&moi);
	float dien = moi - cu;
	
	if(0<=dien && dien<50){
		printf("Tien dien la: %.2f",tienDien = dien * 10.000);
	}else if(50<=dien && dien<100){
		printf("Tien dien la: %.2f",tienDien = dien * 15.000);
	}else if(100<=dien && dien<150){
		printf("Tien dien la: %.2f",tienDien = dien * 20.000);
	}else if(150<=dien && dien<200){
		printf("Tien dien la: %.2f",tienDien = dien * 25.000);
	}else if(dien>200){
		printf("Tien dien la: %.2f",tienDien = dien * 20.000);
	}
	return 0;
}