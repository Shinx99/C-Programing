#include <stdio.h>
#include <math.h>

int main (){
	
	int n,m;
	printf ("\nNhap gia tri hang cua mang: "); scanf ("%d",&n);
	printf ("Nhap gia tri cot cua mang: "); scanf ("%d",&m);
	
	int a[n][m];
	int square[n][m];
		for (int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				printf ("\nNhap phan tu hang %d va cot %d: ",i,j); scanf ("%d",&a[i][j]);
			}
		}
		for (int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				square[i][j] = a[i][j] * a[i][j];
			}
		}
			printf ("\nMang chua gia tri binh phuong la:\n\n ");
			for (int i=0; i<n; i++){
				for (int j=0; j<m; j++){
					printf ("a[%d][%d] = %d\n",i,j,square[i][j]);
					
				}
			}
				printf ("\n");


return 0;
}

