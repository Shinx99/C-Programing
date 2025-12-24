#include <stdio.h>

void hd(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}


int main (){
	
	int a,b;
	printf (" a = "); scanf ("%d",&a);
	printf (" b = "); scanf ("%d",&b);
	 
	 hd(&a,&b);
	 printf ("\n Hoan vi gia tri cua a va b la:");
	 printf ("\n a = %d",a);
	 printf ("\n b = %d",b);


return 0;
}

