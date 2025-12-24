#include <stdio.h>

void in(int a[],int n){
	for (int i=0; i<n; i++){
		printf (" a[%d] = ",i);
		scanf ("%d",&a[i]);
	}
}
void out(int a[], int n){
	printf ("\n Cac gia tri da nhap: ");
	for (int i=0;i<n; i++){
		printf ("\n a[%d] = %d",i,a[i]);
	}
}
void giaTri(int a[], int n){
	int count=0;
	int sum=0;
	printf ("\n Cac gia tri chan trong mang: ");
	for (int i=1; i<n; i++){
		if (a[i]%2 ==0){
			printf ("\n a[%d] = %d",i,a[i]);
			sum += a[i];
			count ++;
		}
	}
	printf ("\n Co %d pt o vi tri chan ",count);
	printf ("\n Tong cac phan tu chan: %d",sum);
}

int main (){
	int n;
	printf ("\n Nhap phan tu cho mang: ");
	scanf ("%d",&n);
	
	int a[n];
	in(a,n);
	out(a,n);
	giaTri(a,n);

return 0;
}

