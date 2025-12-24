#include <stdio.h>

int main (){
	int n;
	printf ("\nNhap gia tri mang: "); scanf ("%d",&n);
	int a[n];
	for (int i=0; i<n; i++){
		printf ("a[%d] = ",i); scanf ("%d",&a[i]);
	}
	int min = a[0];
	int max = a[0];
	for (int i=0; i<n; i++){
		if (a[i]<min){
			min = a[i];
		}
		if (a[i]>max){
			max = a[i];
		}
	}
	printf ("\n Min = %d",min);
	printf ("\n Max = %d",max);


return 0;
}

