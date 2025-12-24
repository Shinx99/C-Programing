#include <stdio.h>
#include <stdlib.h>


void tienKaraoke(){
	
	float a,b;
	do {
		printf ("\nGio bat dau: "); scanf ("%f",&a);
		printf ("Gio ket thuc: "); scanf ("%f",&b);
		//quan mo tu 12 ---> 23h
	}while (a>b || a<12 || b>23);
		//c:so gio cua khach
		//d:tinh tong tien
		double c,d;
		c = b-a;	
		if (c<=3){
			d = c*150000;		
		}else {
			d = 3*150000 + ((c-3)*150000*0.7);		
		}
		if (a>=14 && a<=17){
			d = d*0.9;
		}
			printf ("Tong tien can thanh toan: %.2lf",d);
	}

void tienDien(){
	
	const double bac1 = 1.678, bac2 = 1.734, bac3 = 2.014, bac4 = 2.536, bac5 = 2.834, bac6 = 2.927;
	double a,b;
do {
	printf ("\nso kWh su dung: ");
	scanf ("%lf",&a);
}while (a<0);
	
	 if (a <= 50){
	 	b = a * bac1;
	}else if (a <= 100){
		b = (50 * bac1)+(a-50)*bac2;
	}else if (a <= 200){
		b = (50 * bac1)+(100-50)*bac2 + (a-100)*bac3;
	}else if (a <= 300){
		b = (50 * bac1)+(100-50)*bac2 + (200-100)*bac3 + (a-200)*bac4;
	}else if (a <= 400){
		b = (50 * bac1)+(100-50)*bac2 + (200-100)*bac3 + (300-200)*bac4 + (a-300)*bac5;
	}else{
		b = (50 * bac1)+(100-50)*bac2 + (200-100)*bac3 + (300-200)*bac4 + (400-300)*bac5 + (a-400)*bac6;
	}printf ("so tien can phai dong la %.3lf",b);

}





int main (){
	
	int chon;
	while (chon < 1 || chon > 10){
	printf ("\t$--------------------------------------------------------$");
	printf ("\n\t* Chuc nang 1: Kiem tra so nguyen \t\t\t *");
	printf ("\n\t* Chuc nang 2: Tim uoc so chung va boi so chung cua 2 so *");
	printf ("\n\t* Chuc nang 3: Tinh tien cho quan Karaoke \t\t *");
	printf ("\n\t* Chuc nang 4: Tinh tien dien \t\t\t\t *");
	printf ("\n\t* Chuc nang 5: Chuc nang doi tien \t\t\t *");
	printf ("\n\t* Chuc nang 6: Tinh lai xuat ngan hang vay tra gop \t *");
	printf ("\n\t* Chuc nang 7: Vay tien mua xe \t\t\t\t *");
	printf ("\n\t* Chuc nang 8: Sap xep thong tin sinh vien \t\t *");
	printf ("\n\t* Chuc nang 9: Xay dung gamme FPOLY-LOTT \t\t *");
	printf ("\n\t* Chuc nang 10: Tinh toan phan so \t\t\t *");
	printf ("\n\t$--------------------------------------------------------$");
		printf ("\n\nXin moi chon bai: "); scanf ("%d",&chon);
		
	}
	switch (chon){
		
		case 1:
			printf ("Chuc nang dang xay dung, quay lai sau!");
			break;
		case 2:
			printf ("Chuc nang dang xay dung, quay lai sau!");
			break;
		case 3:
			tienKaraoke();
			break;
		case 4:
			tienDien();
			break;
		case 5:
			printf ("Chuc nang dang xay dung, quay lai sau!");
			break;
		case 6:
			printf ("Chuc nang dang xay dung, quay lai sau!");
			break;
		case 7:
			printf ("Chuc nang dang xay dung, quay lai sau!");
			break;
		case 8:
			printf ("Chuc nang dang xay dung, quay lai sau!");
			break;
		case 9:
			printf ("Chuc nang dang xay dung, quay lai sau!");
			break;
		case 10:
			printf ("Chuc nang dang xay dung, quay lai sau!");
			break;									
		
		default: 
			exit (0);
	}
			
	





return 0;
}

