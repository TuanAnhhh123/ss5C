#include<stdio.h>
int main(){
	int date,month;
	printf("Nhap ngay thang sinh vao day: ");
	scanf("%d %d",&date,&month);
	if(month==3){
		if(date>=21){
			printf("Cung hoang dao cua ban la: Bach Duong");
		}else{
			printf("Cung hoang dao cua ban la: Song Ngu");
		}
	}else if(month==4){
		if(date>=21){
			printf("Cung hoang dao cua ban la: Kim Nguu");
		}else{
			printf("Cung hoang dao cua ban la: Bach Duong");
		}
	}else if(month==5){
		if(date>=21){
			printf("Cung hoang dao cua ban la: Song Tu");
		}else{
			printf("Cung hoang dao cua ban la: Kim Nguu");
		}
	}else if(month==6){
		if(date>=22){
			printf("Cung hoang dao cua ban la: Cu Giai");
		}else{
			printf("Cung hoang dao cua ban la: Song tu");
		}
	}else if(month==7){
		if(date>=23){
			printf("Cung hoang dao cua ban la: Su Tu");
		}else{
			printf("Cung hoang dao cua ban la: Cu Giai");
		}
	}else if(month==8){
		if(date>=23){
			printf("Cung hoang dao cua ban la: Xu Nu");
		}else{
			printf("Cung hoang dao cua ban la: Su Tu");
		}
	}else if(month==9){
		if(date>23){
			printf("Cung hoang dao cua ban la: Thien Binh");
		}else{
			printf("Cung hoang dao cua ban la: Xu nu");
		}
	}else if(month==10){
		if(date>=24){
			printf("Cung hoang dao cua ban la: Bo Cap");
		}else{
			printf("Cung hoang dao cua ban la: Thien Binh");
		}
	}else if(month==11){
		if(date>=23){
			printf("Cung hoang dao cua ban la: Nhan Ma");
		}else{
			printf("Cung hoang dao cua ban la: Bo Cap");
		}
	}else if(month==12){
		if(date>=22){
			printf("Cung hoang dao cua ban la: Ma Ket");
		}else{
			printf("Cung hoang dao cua ban la: Nhan Ma");
		}
	}else if(month==1){
		if(date>21){
			printf("Cung hoang dao cua ban la: Bao Binh");
		}else{
			printf("Cung hoang dao cua ban la: Ma Ket");
		}
	}else if(month==2){
		if(date>21){
			printf("Cung hoang dao cua ban la: Song Ngu");
		}else{
			printf("Cung hoang dao cua ban la: Bao Binh");
		}
	}else{
		printf("Thang khong hop le");
	}
}
