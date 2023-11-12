#include<stdio.h>
int main(){
	int income,salary,tax;
	printf("Nhap vao thu nhap: ");
	scanf("%d",&income);
	if(income<=5000000){
		tax=income*5/100;
	}else if(income<=10000000){
		tax=income*10/100;
	}else if(income<=18000000){
		tax=income*15/100;
	}else if(income<=32000000){
		tax=income*20/100;
	}else if(income<=52000000){
		tax=income*25/100;
	}else if(income<=80000000){
		tax=income*30/100;
	}else{
		tax=income*35/100;
	}
	salary=income-tax;
	printf("Thue la: %d\n",tax);
	printf("Luong cua nhan vien bi giam: %d",tax);
	printf("Luong thuc cua nhan vien la:%d\n ",salary);
}
