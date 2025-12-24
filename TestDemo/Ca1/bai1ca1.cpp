#include <stdio.h>

int main (){
	int n;
	
	printf ("\n Nhap so: ");
	scanf ("%d",&n);
	
	if (n%7 == 0){
		printf ("\n So %d chia het cho 7 ",n);
	}else{
		printf ("\n So %d khong chia het cho 7 ",n);
	}
	if (n%2 == 0){
		printf ("\n So %d la so chan ",n);
	}else {
		printf ("\n So %d la so le ",n);
	}
	if (n<50){
		printf ("\n So %d be hon 50 ",n);
	}else if (n == 50){
		printf ("\n So %d bang 50 ",n);
	}else{
		printf ("\n So %d lon hon 50 ",n);
	}
	
	
	

return 0;
}

