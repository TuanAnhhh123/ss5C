#include <stdio.h>
#include <math.h>

int main(){
	int commission , income;
	printf("nhap tien luong cua ban: ");
	scanf("%d",&income);
	if(income <= 100){
		commission = income * 0.05;
	}else if(100 < income && income <= 300){
		commission = income * 0.1;
	}else if(income > 300){
		commission = income * 0.2;
	}
	printf("Tien hoa hong la : %d trieu", commission);
}
