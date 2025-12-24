#include <stdio.h>
#include <math.h>

	const double bac1 = 1.678, bac2 = 1.734, bac3 = 2.014, bac4 = 2.536, bac5 = 2.834, bac6 = 2.927;

int main (){
	
	double a,b;
	printf ("so kWh su dung: ");
	scanf ("%lf",&a);
		
	if (a >= 0){
	 if (a <= 50){
	 	b = a * bac1;
		printf ("so tien can phai dong la %.3lf",b);
	}else if (a <= 100){
		b = (50 * bac1)+(a-50)*bac2;
		printf ("so tien can phai dong la %.3lf",b);
	}else if (a <= 200){
		b = (50 * bac1)+(100-50)*bac2 + (a-100)*bac3;
		printf ("so tien can phai dong la %.3lf",b);
	}else if (a <= 300){
		b = (50 * bac1)+(100-50)*bac2 + (200-100)*bac3 + (a-200)*bac4;
		printf ("so tien can phai dong la %.3lf",b);
	}else if (a <= 400){
		b = (50 * bac1)+(100-50)*bac2 + (200-100)*bac3 + (300-200)*bac4 + (a-300)*bac5;
		printf ("so tien can phai dong la %.3lf",b);
	}else if (a > 400){
		b = (50 * bac1)+(100-50)*bac2 + (200-100)*bac3 + (300-200)*bac4 + (400-300)*bac5 + (a-400)*bac6;
		printf ("so tien can phai dong la %.3lf",b);
	}
	}else {
		printf ("khong hop le !");
	}
					
	return 0;
}
