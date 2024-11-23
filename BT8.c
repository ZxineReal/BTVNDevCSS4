#include<stdio.h>

int main(){
	float edge1, edge2, edge3;
	printf("Moi ban nhap vao canh thu nhat: \n");
	scanf("%f",&edge1);
	printf("Moi ban nhap vao canh thu hai: \n");
	scanf("%f",&edge2);
	printf("Moi ban nhap vao canh thu ba: \n");
	scanf("%f",&edge3);
	
	if(edge1>0 && edge2>0 &&edge3>0 && (edge1+edge2>edge3 && (edge1+edge3)>edge2 && (edge2+ edge3)>edge1)){
		printf("Day la 3 canh cua tam giac");
	}else{
		printf("Day khong phai la 3 canh cua tam giac");
	}
	return 0;
}