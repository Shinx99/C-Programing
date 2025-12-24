#include <stdio.h>
#include <string.h>

struct sinhVien{
	char tenSV[50];
	char maSV[10];
	float diemTB;
};

void input(struct sinhVien sv[], int n){
	for (int i=0; i<n; i++){
		printf ("\n %d.\n Nhap ten: ",i+1);
		fgets (sv[i].tenSV,sizeof(sv[i].tenSV),stdin);
		sv[i].tenSV[strcspn(sv[i].tenSV,"\n")] = '\0';
		
		printf (" Nhap ma SV: ");
		fgets (sv[i].maSV,sizeof(sv[i].maSV),stdin);
		sv[i].maSV[strcspn(sv[i].maSV,"\n")] = '\0';
		
		printf (" Nhap diem TB: ");
		while(1){
			if (scanf("%f",&sv[i].diemTB) ==1 && sv[i].diemTB >=0 && sv[i].diemTB <=10){
				break;
			}else{
				printf ("\n Diem khong hop le!\n Moi nhap lai: ");
				while (getchar() != '\n');
			}
		}
		getchar();
	}
}

void output(struct sinhVien sv[], int n){
	for (int i=0; i<n; i++){
		printf ("\n %d.\n Ho va ten: %s",i+1, sv[i].tenSV);
		printf ("\n Ma SV: %s",sv[i].maSV);
		printf ("\n Diem TB: %.2f\n",sv[i].diemTB);
	}
}

void arrange(struct sinhVien sv[], int n){
	struct sinhVien temp;
	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			if (sv[i].diemTB < sv[j].diemTB){
				temp = sv[i];
				sv[i]= sv[j];
				sv[j]= temp;
			}
		}
	}
	output(sv,n);
}

int main (){
	int n;
	int f=0;
	while (!f){
		printf ("\n Nhap so thong tin can tra: ");
		if (scanf ("%d",&n) != 1){
			while (getchar() != '\n');
			printf ("\n Khong hop le! Nhap lai: ");
		}else if (n<=0){
			printf ("\n Khong hop le! Nhap lai: ");
		}else{
			f=1;
		}
	}
	while (getchar() != '\n');
	struct sinhVien sv[n];
	
	input(sv,n);
	printf ("\n Thong tin sv da nhap la: ");
	output(sv,n);
	printf ("\n Sinh vien sau khi sap xep la: ");
	arrange(sv,n);


return 0;
}

