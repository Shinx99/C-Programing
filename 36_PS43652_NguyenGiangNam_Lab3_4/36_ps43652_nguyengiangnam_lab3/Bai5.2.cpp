#include <stdio.h>

		//kiem tra nam nhuan		
		//so ngay trong thang
int month(int m, int y){
		
		switch (m){
		
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				return 31;
				
			case 4: case 6: case 9: case 11:
				return 30;
					
			case 2:
				return ((y % 400 == 0)||(y % 100 != 0 && y % 4 == 0))?29:28;
				
		
			default:
				return -1;
		}
	
	}
	
	

	
void ngaytruocdo(int d, int m, int y){
			//ngay truoc do
		
		if (d == 1){
			if (m == 1){
				d = 31;
				m = 12;
				y--;
			}else {
				m--;
				d = month(m,y);
			}
		}else {
			d--;
		}
			printf ("\nngay truoc do: %d / %d / %d", d, m, y);
		
}	

void ngayketiep(int d, int m, int y){		//ngay sau do
		
		int a = month(m,y);
		if (d == a){
			if (m == 12){
				d = 1;
				m = 1;
				y++;
			}else {
				d = 1;
				m++;
			} 
		}else {
			d++;
		}
		printf ("\nngay sau do: %d / %d / %d",d,m,y);
}
	
	
int main (){
		int d,m,y;
		do{
		
			printf ("ngay: ");	scanf ("%d",&d);
			printf ("thang: ");	scanf ("%d",&m);
			printf ("nam: ");	scanf ("%d",&y);
	}	while (d < 1 || d > 31 || m < 1 || m > 12 || y < 1);
	
//		printf ("\nso ngay cua thang  %d", month(m,y));
		ngayketiep(d,m,y);
		ngaytruocdo(d,m,y);
		
	
	

return 0;
}

