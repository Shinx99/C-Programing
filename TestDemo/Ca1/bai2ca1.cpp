#include <stdio.h>

void inA(int a[],int n){
	for (int i=0; i<n; i++){
		printf (" a[%d] = ",i);
		scanf ("%d",&a[i]);
	}
}
void outA(int a[],int n){
	printf ("\n Mang da nhap vao: ");
	for (int i=0; i<n; i++){
		printf ("\n a[%d] = %d",i,a[i]);
	}
}
void min(int a[],int n){
	int min=a[0];
	for (int i=0; i<n; i++){
		if (min > a[i]){
			min  = a[i];
		}
	}
	printf ("\n Gia tri nho nhat trong mang: %d",min);
}
void chanA(int a[],int n){
	int count =0;
	for (int i=0; i<n; i++){
		if (a[i]%2 == 0){
			count ++;
		}
	}
	printf ("\n Co %d gia tri chan trong mang",count);
}



int main (){
	
	int n;
	printf ("\n Nhap gia tri cho mang: ");
	scanf ("%d",&n);
	
	int a[n];
	inA(a,n);
	outA(a,n);
	min(a,n);
	chanA(a,n);

return 0;
}

