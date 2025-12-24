#include <stdio.h>

int main (){
	int n;
	printf ("\n Nhap so: ");
	while(1){
		if(scanf("%d",&n) == 1 && n>0){
			break;
		}else{
			printf ("\n Khong hop le!\n Nhap lai: ");
		}
	}
	int sum=0;
	for (int i=1; i<=n; i++){
		if (i%2 == 0){
			sum += i;
		}
	}
	printf ("\n Tong so chan tu 0 den %d la: %d", n, sum);

return 0;
}

