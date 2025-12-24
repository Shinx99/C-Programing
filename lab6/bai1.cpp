#include <stdio.h>

int main (){
	int n;
	printf ("\nNhap gia tri mang: "); scanf ("%d",&n);
	int a[n];
	for (int i=0; i<n; i++){
		printf ("a[%d] = ",i); scanf ("%d",&a[i]);
	}
	int tong = 0;
	int count = 0;
	float tb;
	
	for (int i=0; i<n; i++){
		if (a[i]%3 == 0){
			tong += a[i];
			count ++;
		}
	}
		tb = (float)tong/count;
		printf ("\nTrung binh tong cac so chia het cho 3 la:. %.2f",tb);


return 0;
}

