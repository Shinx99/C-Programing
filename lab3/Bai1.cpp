#include <stdio.h>

int main (){
	
float diem;
				printf ("diem cua hs la  ");
				scanf ("%f",&diem);
					
				if (diem >= 9 && diem <= 10){
							printf ("xuat xac");
							
				}else if (diem >= 8 && diem < 9){
							printf ("gioi");
							
				}else if (diem >= 6.5 && diem < 8){
							printf ("kha");
							
				}else if (diem >= 5 && diem < 6.5){
							printf ("trung binh");
							
				}else if (diem >= 3.5 && diem < 5){
							printf ("yeu");
							
				}else if (diem < 3.5 && diem > 0){
							printf ("kem");
							
				}else { 
							printf ("\ndiem khong hop le!");
				}

	
	return 0;
}
