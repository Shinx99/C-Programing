#include <stdio.h>
#include <math.h>

int main (){
	
	double a,b,c,x,x1,x2,delta;
	
	printf ("a = ");
	scanf ("%lf",&a);
	printf ("b = ");
	scanf ("%lf",&b);
	printf ("c = ");
	scanf ("%lf",&c);
	
	if (a != 0){
		delta = b*b - 4*a*c;
		printf ("delta = %lf",delta);
		if (delta < 0){
			printf ("\nphuong trinh vo nghiem");
		}else if (delta == 0){
			x = -b/(2*a);
			printf ("\nphuong trinh co nghiem kep: x = %lf ",x);
		}else {
			printf ("\nphuong trinh co 2 nghiem rieng biet:");
			x1 = (-b + sqrt(delta))/(2*a);
			printf ("\nx1 = %lf",x1);
			x2 = (-b - sqrt(delta))/(2*a);
			printf ("\nx2 = %lf",x2);
		}
	}
	else {		
		if (b == 0){			
			if(c == 0){
				printf ("phuong trinh vo so nghiem");
			}else {
				printf ("phuong trinh vo nghiem");
			}
		}else {
			x = -c/b;
			printf ("phuong trinh co nghiem la x = %lf",x);
		}
			
	}
	
	
	return 0;
}
