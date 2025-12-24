#include <stdio.h>
#include <string.h>

struct student{
	char tenSV[50];
	char maSV[20];
	float diemT;
	
};

void input(struct student sv[], int n){
	for (int i=0; i<n; i++){
		printf ("\n %d.\n Nhap ten: ",i+1);
		fgets(sv[i].tenSV,sizeof(sv[i].tenSV),stdin);
		sv[i].tenSV[strcspn(sv[i].tenSV,"\n")] = '\0';
		
		printf (" Nhap ma: ");
		fgets(sv[i].maSV,sizeof(sv[i].maSV),stdin);
		sv[i].maSV[strcspn(sv[i].maSV,"\n")] = '\0';
		
		printf (" Nhap diem: ");
		while (1){
			if (scanf("%f",&sv[i].diemT) ==1 && sv[i].diemT >=0 && sv[i].diemT <=10){
				break;
			}else{
				printf ("\n Diem khong hop le!\n Nhap lai: ");
				while (getchar() != '\n');
			}
		}
		getchar();
	}
}
void output(struct student sv[], int n){
	printf ("\n\n Danh sach sv da nhap: ");
	for (int i=0; i<n; i++){
		printf ("\n %d.\n Ho va ten: %s",i+1,sv[i].tenSV);
		printf ("\n Ma SV: %s",sv[i].maSV);
		printf ("\n Diem thi: %.2f",sv[i].diemT);
	}
}
void ketQua(struct student sv[], int n){
	printf ("\n\n Danh sach sv thi dau: ");
	for (int i=0; i<n; i++){
		if (sv[i].diemT >=5){
			printf ("\n %d.\n Ho va ten: %s",i+1,sv[i].tenSV);
			printf ("\n Ma SV: %s",sv[i].maSV);
			printf ("\n Diem thi: %.2f",sv[i].diemT);
			printf ("\n Ket qua : Dau");
		}
	}
}
void arrange(struct student sv[], int n){
	struct student temp;
	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			if (sv[i].diemT < sv[j].diemT){
				temp = sv[i];
				sv[i]= sv[j];
				sv[j]= temp;
			}
		}
	}
	printf ("\n\n Danh sach sv dc sap xep: ");
	for (int i=0; i<n; i++){
		printf ("\n %d.\n Ho va ten: %s",i+1,sv[i].tenSV);
		printf ("\n Ma SV: %s",sv[i].maSV);
		printf ("\n Diem thi: %.2f",sv[i].diemT);
	}
}

int main (){
	
	int n;
	printf ("\n Nhap so sinh vien can tra: ");
	while(1){
		if (scanf ("%d",&n) == 1 && n>0){
			getchar();
			break;
		}else if (n<1){
			printf ("\n Khong hop le!\n Nhap lai: ");
			while(getchar() != '\n');
		}
	}
	struct student sv[n];
	
	input(sv,n);
	output(sv,n);
	arrange(sv,n);
	ketQua(sv,n);
	

return 0;
}

