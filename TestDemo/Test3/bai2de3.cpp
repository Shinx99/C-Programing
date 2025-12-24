#include <stdio.h>

int main (){
	int n;
	printf ("\n Nhap chi so mang: "); scanf ("%d",&n);
	
	int soNguyen[n];
	for (int i=0; i<n; i++){
		printf (" soNguyen[%d] = ",i); scanf ("%d",&soNguyen[i]);
	}
	printf ("\n Gia tri da nhap cho mang la:");
	for (int i=0; i<n; i++){
		printf ("\n soNguyen[%d] = %d",i,soNguyen[i]);
	}
	
	printf ("\n\n So chan co trong mang la:");
	int count=0;
	for (int i=0; i<n; i++){
		if (soNguyen[i]%2 == 0){
			printf ("\n soNguyen[%d] = %d",i,soNguyen[i]);
			count++;
		}
		if (count == 0){
			printf ("\n Khong co so nao!");
			return 0;
		}
	}

return 0;
}

