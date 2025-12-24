#include <stdio.h>
#include <math.h>

void diemTrungBinh(){
	float diem;
				printf ("diem cua hs la  ");
				scanf ("%f",&diem);
					
				if (diem >= 9 && diem <= 10){
							printf ("xuat xac");
							
				}else if (diem >= 8 && diem < 9){
							printf ("gioi");
							
				}else if (diem >= 6.5 && diem < 8){
							printf ("kha");
							
				}else if (diem >= 5 && diem < 6.5){
							printf ("trung binh");
							
				}else if (diem >= 3.5 && diem < 5){
							printf ("yeu");
							
				}else if (diem < 3.5 && diem > 0){
							printf ("kem");
							
				}else { 
							printf ("\ndiem khong hop le!");
				}
}

void ptB1(){
	float a,b,x;
	
						printf ("a = ");
						scanf ("%f",&a);
						printf ("b = ");
						scanf ("%f",&b);
						
						if (a==0){
							if (b==0){
								printf ("phuong trinh co vo so nghiem");
							}else {
								printf ("phuong trinh vo nghiem");
							}
						}else {
							x = -b/a;
							printf ("phuong trinh co nghiem x = %f",x);
						}
}

void ptB2(){
	float z,m,c,n,x1,x2,delta;
	
						printf ("a = ");scanf ("%f",&z);
						printf ("b = ");scanf ("%f",&m);
						printf ("c = ");scanf ("%f",&c);
							
						if (z != 0){
							delta = m*m - 4*z*c;
							printf ("delta = %f",delta);
							if (delta < 0){
								printf ("\nphuong trinh vo nghiem");
							}else if (delta == 0){
								n = -m/(2*z);
								printf ("\nphuong trinh co nghiem kep: x = %f ",n);
							}else {
								printf ("\nphuong trinh co 2 nghiem rieng biet:");
								x1 = (-m + sqrt(delta))/(2*z);
								printf ("\nx1 = %f",x1);
								x2 = (-m - sqrt(delta))/(2*z);
								printf ("\nx2 = %f",x2);
							}
						}
						else {		
							if (m == 0){			
								if(c == 0){
									printf ("phuong trinh vo so nghiem");
								}else {
									printf ("phuong trinh vo nghiem");
								}
							}else {
								n = -c/m;
								printf ("phuong trinh co nghiem la x = %f",n);
							}
}
}

void tienDien(){
		float a,b;
				printf ("so kWh su dung: ");
				scanf ("%f",&a);
					
				if (a >= 0){
				 if (a < 51){
				 	b = a * 1.678;
					printf ("so tien can phai dong la %f",b);
				}else if (a < 101){
					b = a * 1.734;
					printf ("so tien can phai dong la %f",b);
				}else if (a < 201){
					b = a * 2.014;
					printf ("so tien can phai dong la %f",b);
				}else if (a < 301){
					b = a * 2.536;
					printf ("so tien can phai dong la %f",b);
				}else if (a < 401){
					b = a * 2.834;
					printf ("so tien can phai dong la %f",b);
				}else if (a > 400){
					b = a * 2.927;
					printf ("so tien can phai dong la %f",b);
				}
				}else {
					printf ("khong hop le !");
				}
}




int main (){
	
	printf ("Chao mung den voi Bai Thuc Hanh 03!");
	printf ("\nBai 1: Chuong trinh tinh hoc luc");
	printf ("\nBai 2: Chuong trinh giai phuong trinh");
	printf ("\nBai 3: Chuong trinh tinh tien dien");
	
	int k;
	printf ("\nChon mot bai de bat dau: ");
	scanf ("%d",&k);
	
	switch (k){
		case 1:
			diemTrungBinh();
			break;
			
		case 2:
			printf ("1. Phuong trinh bac 1");
			printf ("\n2. Phuong trinh bac 2");
			int v;
			printf ("\nChon phuong trinh: ");
			scanf ("%d",&v);
			
			switch (v){
			
				case 1:
					ptB1();
					break;
				case 2:
					ptB2();
					break;
			}break;	
							
		case 3:
			tienDien();
			break;
		default:
		    printf ("\nLua chon khong hop le!");
		    break;						
	
		}
	
	
	return 0;
}
