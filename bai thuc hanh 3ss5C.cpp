#include<stdio.h>
int main(){
	int minute,phonePrice,basicPrice=25000;
	printf("Nhap vao so phut su dung dien thoai: ");
	scanf("%d",&minute);
	if(minute<=50){
		phonePrice=basicPrice+minute*600;
	}else if(minute<=150){
		phonePrice=basicPrice+50*600+(minute-50)*400;
	}else if(minute<=200){
		phonePrice=basicPrice+50*600+100*400+(minute-150)*200;
	}else {
		phonePrice=basicPrice+50*600+100*400+50*200+(minute-200)*100;
	}
	printf("Gia tien dien thoai la: %d",phonePrice);
}
