#include <stdio.h>

void nhap(int a[], int n){
	
	for (int i=0; i<n; i++){
		printf (" a[%d] = ", i);
		scanf ("%d", &a[i]);
	}
}
void xuat(int a[], int n){
	for (int i=0; i<n; i++){
		printf ("\n a[%d] = %d", i, a[i]);
	}
}

void sum(int a[], int n){
	int count=0, sum=0;
	for (int i=0; i<n; i++){
		if (a[i]%5 == 0 && a[i]%3 != 0){
			sum += a[i];
			count ++;
		}
	}
	printf ("\n Tong %d so chia het cho 5 ma ko chia het cho 3: %d",count,sum);
	
}



int main (){
	
	int n;
	printf ("\n Nhap gia tri mang: ");
	while(1){
		if (scanf ("%d",&n) == 1 && n>0){
			break;
		}else{
			printf ("\n Khong hop le!\n Nhap lai: ");
		}
	}
	int a[n];
	nhap(a,n);
	printf ("\n Gia tri da nhap vao la:");
	xuat(a,n);
	sum(a,n);


return 0;
}

