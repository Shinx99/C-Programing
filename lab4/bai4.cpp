#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void trungBinhTong(){
	
	int min, max;
	printf ("min = ");
	scanf ("%d",&min);
	printf ("max = ");
	scanf ("%d",&max);
	
	float tong = 0, bienDem = 0, trungBinh = 0;
	int i = min;
	while (i<=max){
		if (i%2==0){
			tong += i;
			bienDem ++;
		} i++;
	}		trungBinh = tong/bienDem;
			printf ("trung binh tong cua cac so chia het cho 2 tu %d den %d = %.2f",min,max,trungBinh);
}

void soNguyenTo(){
	int x,i;
	printf("x = "); scanf ("%d",&x);
	int count=0;
	for (i=2;i<sqrt(x);i++){
		if (x%i==0){
			count ++;
		}
	}	if (count==0){
			printf ("%d la so nguyen to ",x);
		}else{
			printf ("%d khong phai so nguyen to",x);
		}
}

void soChinhPhuong(){
	int x,i,count=0;
	printf ("x = "); scanf ("%d",&x);
	for (i=1;i<x;i++){
		if (i*i==x){
			printf ("%d la so chinh phuong",x);
		
		}
	}
}

int main (){

	
	
	int a;
	do{
	
	printf ("\n\n\t\t$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$");
	printf ("\n\t\t$ Bai 1: Trung binh tong cua cac so tu nhien chia het cho 2 $");
	printf ("\n\t\t$ Bai 2: Xac dinh so nguyen to \t\t\t\t    $");
	printf ("\n\t\t$ Bai 3: So chinh phuong \t\t\t\t    $");
	printf ("\n\t\t$ Bai 4: Thoat chuong trinh \t\t\t\t    $");
	printf ("\n\t\t$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$");
	printf ("\n\nXin moi chon chuong trinh:  ");	scanf ("%d",&a);
	}while (a<1 || a>4);
	
	
	switch (a){
		case 1:
			trungBinhTong();
			break;
		case 2:
			soNguyenTo();
			break;
		case 3:
			soChinhPhuong();
			break;
		case 4:
			printf ("\nDa thoat chuong trinh!");
			exit (0);
			break;
	}

return 0;
}

