#include <stdio.h>

struct hangHoa{
	char tenH[50];
	int maH;
	int soL;
};

void input(struct hangHoa h[]){
	for (int i=0; i<1; i++){
		printf ("\n Nhap ten hang: ");
		fgets(h[i].tenH,sizeof(h[i].tenH),stdin);
		
		printf (" Nhap ma hang: ");
		scanf ("%d",&h[i].maH);
		printf (" Nhap so luong: ");
		scanf ("%d",&h[i].soL);
	}
}
void output(struct hangHoa h[]){
	for (int i=0; i<1; i++){
		printf ("\n Ten hang: %s",h[i].tenH);
		printf (" Ma hang: %d",h[i].maH);
		printf ("\n So luong: %d",h[i].soL);
	}
}


int main (){
	struct hangHoa h[1];
	
	input(h);
	output(h);


return 0;
}

