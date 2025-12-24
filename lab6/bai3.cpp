#include <stdio.h>

void swap(int *x, int *y){
	int temp = *x;
		*x = *y;
		*y = temp;
}


int main (){
	int n;
	printf ("\nNhap gia tri mang: "); scanf ("%d",&n);
	int a[n];
	for (int i=0; i<n; i++){
		printf ("a[%d] = ",i); scanf ("%d",&a[i]);
	}
	int x,y;
	for (int i=0; i<n; i++){
		for (int j=0; j<n;j++){
			if (a[i]<a[j]){
				swap(&a[i],&a[j]);
			}
		}
	}
	printf ("\nMang sau khi sap xep:");
	for (int i=0; i<n; i++){
		printf ("\na[%d] = %d",i,a[i]);
	}
return 0;
}

