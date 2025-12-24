#include <stdio.h>
#include <string.h>

struct matHang{
	char maHang[10];
	char tenHang[30];
	double dongia;
};

void input(struct matHang ds[3]){
	
	for (int i=0; i<3; i++){
		printf ("\n %d.\n Nhap ten hang: ",i+1);
		fgets(ds[i].tenHang,sizeof(ds[i].tenHang),stdin);
		ds[i].tenHang[strcspn(ds[i].tenHang,"\n")] = '\0';
		
		printf (" Nhap ma hang: ");
		fgets(ds[i].maHang,sizeof(ds[i].maHang),stdin);
		ds[i].maHang[strcspn(ds[i].maHang,"\n")] = '\0';
		
		printf (" Nhap gia: ");
		scanf ("%lf",&ds[i].dongia);
		while (getchar() != '\n');
	}
}
void output(struct matHang ds[3]){
	for (int i = 0; i < 3; i++) {
	printf("\n%d.\n Ten hang: %s\n Ma hang: %s\n Gia: %.2f\n", i + 1, ds[i].tenHang, ds[i].maHang, ds[i].dongia);
	}
}

void arrange(struct matHang ds[3]){
	struct matHang temp;
	for(int i=0; i<3-1; i++){
		for(int j=i+1; j<3; j++){
			if (ds[i].dongia > ds[j].dongia){
				temp = ds[i];
				ds[i]= ds[j];
				ds[j]= temp;
			}
		}
	}
	printf ("\n Danh sach sau khi sap xep la:");
	output(ds);
}

int main (){
	struct matHang danhSach[3];
	
	input(danhSach);
	output(danhSach);
	arrange(danhSach);
	
	printf ("\n Mat hang co gia thap nhat la:");
	printf("\n Ten hang: %s\n Ma hang: %s\n Gia: %.2f\n", danhSach[0].tenHang, danhSach[0].maHang, danhSach[0].dongia);


return 0;
}

