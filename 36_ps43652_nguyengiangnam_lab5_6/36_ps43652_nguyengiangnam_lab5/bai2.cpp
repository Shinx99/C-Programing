#include <stdio.h>


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


int main (){
	int year;
	do{
	printf ("year = ");scanf ("%d",&year);
	}while (year<0);
	int a = checkYear(year);
	if (a==1){
		printf ("%d la nam nhuan",year);
	}else{
		printf ("%d khong phai nam nhuan",year);
	}
		
	


return 0;
}

