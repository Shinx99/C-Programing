#include <stdio.h>

int main (){
	
	double a,b,x;
	
	printf ("a = ");
	scanf ("%lf",&a);
	printf ("b = ");
	scanf ("%lf",&b);
	
	if (a==0){
		if (b==0){
			printf ("phuong trinh co vo so nghiem");
		}else {
			printf ("phuong trinh vo nghiem");
		}
	}else {
		x = -b/a;
		printf ("phuong trinh co nghiem x = %lf",x);
	}
	
	return 0;
}
