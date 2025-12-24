#include <stdio.h>


int main (){
	int n;
	printf ("\n Nhap so: ");
	while(1){
		if (scanf("%d",&n) == 1 && n%2 == 0){
			break;
		}else{
			printf ("\n Khong hop le!\n Nhap lai: ");
		}
	}
	int temp =0;
	printf ("\n Cac so chia het cho 5:");
	for (int i=1; i<=n; i++){
		if (i%5 == 0){
			printf (" %d, ", i);
		}
	}

return 0;
}

