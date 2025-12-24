#include <stdio.h>
#include <string.h>

struct sach{
	char maSach[50];
	char tenSach[50];
	float gia;
};

void input(struct sach book[],int n){
	for (int i=0; i<n; i++){
		printf ("\n %d.\n Nhap ten sach: ",i+1);
		fgets (book[i].tenSach,sizeof(book[i].tenSach),stdin);
		book[i].tenSach[strcspn(book[i].tenSach,"\n")] = '\0';
		
		printf(" Nhap ma sach: ");
		fgets (book[i].maSach,sizeof(book[i].maSach),stdin);
		book[i].maSach[strcspn(book[i].maSach,"\n")] = '\0';
		
		printf (" Nhap gia sach: ");
		scanf ("%f",&book[i].gia);	
		while (getchar() != '\n');	
	}
}
void search(struct sach book[], int n){
	float g, sum=0;
	printf ("\n Tim sach gia lon hon: ");
	scanf ("%f",&g);
	for (int i=0; i<n; i++){
		if(book[i].gia>g){
			printf ("\n %d.\n Ten sach: %s",i+1,book[i].tenSach);
			printf ("\n Ma sach: %s",book[i].maSach);
			printf ("\n Gia sach: %.2f",book[i].gia);
			sum += book[i].gia;
		}
	}
	printf ("\n Tong gia sach la: %.2f",sum);
}

int main (){
	
	int n; 
	int f=0;
	
	while (f!=1){
		printf ("\n Nhap so luong sach: ");
		if (scanf("%d",&n) != 1){
			while (getchar() != 'n');
			printf (" Khong hop le! Moi nhap lai: ");
		}else if(n<=0){
			printf (" Khong hop le! Nhap lai: ");
		}else{
			f=1;
		}
	}
	while (getchar() != '\n');
	struct sach book[n];
	input(book,n);
	search(book,n);

return 0;
}

