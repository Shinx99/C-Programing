#include <stdio.h>
#include <math.h>

int laSoChinhPhuong(int n){
	if (n<1) return 0;
	for (int i=0; i<=n; i++){
		if (i*i == n) return 1;
	}
	return 0;
	
}
void soChinhPhuong(int a[],int n){
	int count=0;
	printf ("\n Cac so chinh phuong trong mang la:\n");
	for (int i=0; i<n; i++){
		if (laSoChinhPhuong(a[i]) == 1){
			printf (" a[%d] = %d\n",i,a[i]);
			count ++;
		}
	}
	if (count == 0){
		printf (" Khong co so chinh phuong nao trong mang");
	}
	
}

int laSoNguyenTo(int n){
	if (n<2) return 0;
	for (int i=2; i<= sqrt(n); i++){
		if (n%i == 0) return 0;
	}
	return 1;
}

void soNguyenTo(int a[], int n){

	int count=0;
	printf ("\n Cac so nguyen to trong mang la:\n");
	for (int i=0; i<n; i++){
		if (laSoNguyenTo(a[i])){
			printf (" a[%d] = %d\n",i,a[i]);
			count ++;
		}
	}
	if (count == 0){
		printf (" Khong co so nguyen to nao trong mang");
	}
		
}

void maxLe(int a[], int n){
	int max=0;
	int count=0;
	for (int i=0; i<n; i++){
		if (a[i]%2 != 0 && a[i] > max){
			max = a[i];
			count ++;
		}
	}
	if (count>0){
		printf (" So le lon nhat trong mang la: %d",max);
	}else {
		printf (" Khong co so le trong mang ");
	}
}

void sumChan(int a[], int n){
	int sum = 0;
	int count = 0;
	for (int i=0; i<n; i++){
		if (a[i]%2 == 0){
			sum += a[i];
			count ++;
		}
	}
	if (count > 0){
		printf ("\n Tong so chan trong mang la: %d",sum);
	}else {
		printf ("\n Khong co so chan nao trong mang ");
	}
	printf ("\n");
}

void nhapMang1(int a[], int *n){
	printf ("\n Nhap gia tri mang: "); scanf ("%d",n);
	for (int i=0; i< *n; i++){
		printf (" a[%d] = ",i); scanf ("%d",&a[i]);
	}
	printf ("\n");
}
void xuatMang1(int a[], int n){
	for (int i=0; i<n; i++){
		printf (" a[%d] = %d\n",i,a[i]);
	}
}

int main (){
	int a[100];
	int n;
	nhapMang1(a, &n);
	xuatMang1(a, n);
	sumChan(a,n);
	maxLe(a,n);
	soNguyenTo(a,n);
	soChinhPhuong(a,n);

return 0;
}

