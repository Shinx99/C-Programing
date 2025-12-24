#include <stdio.h>

int main (){
	
	int min, max;
	float tong = 0, tongSo = 0, trungBinh = 0;

	printf ("min = ");	scanf ("%d",&min);
	printf ("max = ");	scanf ("%d",&max);
	
	int i = min;
	while (i<=max){
		
		if (i%2==0){
			
		tong += i;
		tongSo ++;
		} i++;
	}	
			trungBinh = tong / tongSo;
			printf ("\nTong trung binh tong cua cac so chia het cho 2 tu min den max = %.2f",trungBinh);
			printf ("\nTong cac so chia het cho 2 tu min den max = %.2f",tongSo);



return 0;
}

