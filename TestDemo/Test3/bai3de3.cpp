#include <stdio.h>
#include <string.h>

struct sinhVien{
	char tenSV[50];
	char maSV[10];
	float diemTB;
};

void input(struct sinhVien sv[]){
	for (int i=0; i<3; i++){
		printf ("\n %d.\n Nhap ten: ",i+1);
		fgets(sv[i].tenSV,sizeof(sv[i].tenSV),stdin);
		sv[i].tenSV[strcspn(sv[i].tenSV,"\n")] = '\0';
		
		printf (" Nhap ma SV: ");
		fgets (sv[i].maSV,sizeof(sv[i].maSV),stdin);
		sv[i].maSV[strcspn(sv[i].maSV,"\n")] = '\0';
		
		printf (" Nhap diem SV: ");
		while(1){
			if (scanf ("%f",&sv[i].diemTB) == 1 && sv[i].diemTB >= 0 && sv[i].diemTB <= 10){
				break;
			}else {
				printf ("\n Diem khong hop le!\n Moi nhap lai: ");
				while (getchar() != '\n');
			}
		}
		getchar();
	}
}
void output(struct sinhVien sv[]){
	for (int i=0; i<3; i++){
		printf ("\n %d.\n Ho va ten: %s",i+1,sv[i].tenSV);
		printf ("\n Ma SV: %s",sv[i].maSV);
		printf ("\n Diem TB: %.2f\n",sv[i].diemTB);
	}
}

int main (){
	struct sinhVien sv[3];
	input(sv);
	printf ("\n Danh sach sinh vien da nhap: ");
	output(sv);

return 0;
}

