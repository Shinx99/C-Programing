#include <stdio.h>

int main (){
	int a, c=0; 
	printf ("\n Nhap so: ");
	scanf ("%d",&a);
	
	for (int i=1; i<=a; i++){
		if (a%i == 0){
			c++;	
		}
	}
	printf (" So uoc cua %d tu 0 den %d la: %d",a,a,c);

return 0;
}

