#include <stdio.h>
#include <stdlib.h>

//bai1
int giaTri(int so1,int so2,int so3){
	int max;
	max = so1;
	if(max<so2){
		max = so2;
	}
	if(max<so3){
		max = so3;
	}
	return max;
}
void giaTri(){
	int so1,so2,so3,soMax;;
	printf("Nhap so 1: ");scanf("%d",&so1);
	printf("Nhap so 2: ");scanf("%d",&so2);
	printf("Nhap so 3: ");scanf("%d",&so3);
	
	soMax = giaTri(so1,so2,so3);
	printf("Gia tri lon nhat la: %d",soMax);
}
//bai2
int checkYear(int year){
	
	int a = 0;
	if (year%400==0){
		a = 1;
	}
	if(year % 4 == 0 && year % 100 != 0){
		a = 1;
	}
	return a;
}
void checkYear(){
	int year; 
	printf ("year = ");scanf ("%d",&year);
	
	int a = checkYear(year);
	if (a==1){
		printf ("%d la nam nhuan",year);
	}else{
		printf ("%d khong phai nam nhuan",year);
	}
}
//bai3
void hoanVi(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void hoanVi(){
	
	int a,b;
	printf (" a = "); scanf ("%d",&a);
	printf (" b = "); scanf ("%d",&b);
	 
	 hoanVi(&a,&b);
	 printf ("Hoan vi gia tri cua a va b la:");
	 printf ("\n a = %d",a);
	 printf ("\n b = %d",b);
}





int main (){

	int chucNang;
	START: do {
	printf ("\n\t\t$=======================================$");
	printf ("\n\t\t$ Bai 1: Gia tri lon nhat trong 3 so \t$");
	printf ("\n\t\t$ Bai 2: Tinh nam nhuan \t\t$");
	printf ("\n\t\t$ Bai 3: Xay dung ham hoan vi\t\t$");
	printf ("\n\t\t$=======================================$");
	printf ("\n\tChon bai de bat dau: "); scanf ("%d",&chucNang);
}	while (chucNang<1 || chucNang>3);

	switch(chucNang){
		case 1:
			ToA: giaTri();
			int n;
			do{
				printf ("\n\t\t$=======================================$");
				printf ("\n\t\t$ 1. Quay lai chuc nang vua thuc hien \t$");
				printf ("\n\t\t$ 2. Quay lai Menu \t\t\t$");
				printf ("\n\t\t$ 3. Thoat chuong trinh \t\t$");
				printf ("\n\t\t$=======================================$");
				printf ("\n\t Chon so tu 1 den 3 de tiep tuc: "); 
				scanf ("%d",&n);
			}while (n<1 || n>3);
			switch (n){
				case 1:
					goto ToA;
					break;
				case 2:
					goto START;
					break;
				case 3:
					printf ("\n\t\t\t\tHen gap lai!");
					exit (0);
					break;
			}
			break;
		
		case 2:
			ToB: checkYear();
			int a;
			do{
				printf ("\n\t\t$=======================================$");
				printf ("\n\t\t$ 1. Quay lai chuc nang vua thuc hien \t$");
				printf ("\n\t\t$ 2. Quay lai Menu \t\t\t$");
				printf ("\n\t\t$ 3. Thoat chuong trinh \t\t$");
				printf ("\n\t\t$=======================================$");
				printf ("\n\t Chon so tu 1 den 3 de tiep tuc: "); 
				scanf ("%d",&a);
			}while (a<1 || a>3);
			switch (a){
				case 1:
					goto ToB;
					break;
				case 2:
					goto START;
					break;
				case 3:
					printf ("\n\t\t\t\tHen gap lai!");
					exit (0);
					break;
			}
			break;
		
		case 3:
			ToC: hoanVi();
			int b;
			do{
				printf ("\n\t\t$=======================================$");
				printf ("\n\t\t$ 1. Quay lai chuc nang vua thuc hien \t$");
				printf ("\n\t\t$ 2. Quay lai Menu \t\t\t$");
				printf ("\n\t\t$ 3. Thoat chuong trinh \t\t$");
				printf ("\n\t\t$=======================================$");
				printf ("\n\t Chon so tu 1 den 3 de tiep tuc: "); 
				scanf ("%d",&b);
			}while (b<1 || b>3);
			switch (b){
				case 1:
					goto ToC;
					break;
				case 2:
					goto START;
					break;
				case 3:
					printf ("\n\t\t\t\tHen gap lai!");
					exit (0);
					break;
			}
			break;
	}


return 0;
}

