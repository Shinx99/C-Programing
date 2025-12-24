#include <stdio.h>
#include <string.h>

struct sinhVien{
	char tenSV[50];
	char mssv[50];
	char nganhHoc[50];
	float diemTB;
};

void input(struct sinhVien sv[], int n){
	for (int i=0; i<n; i++){
		printf ("\n %d.Nhap ten sv: ",i+1); 
		fgets(sv[i].tenSV,sizeof(sv[i].tenSV),stdin);
		sv[i].tenSV[strcspn(sv[i].tenSV,"\n")] = '\0';
		
		printf (" Nhap mssv: "); 
		fgets(sv[i].mssv,sizeof(sv[i].mssv),stdin);
		sv[i].mssv[strcspn(sv[i].mssv,"\n")] = '\0';
		
		printf (" Nhap nganh hoc: "); 
		fgets(sv[i].nganhHoc,sizeof(sv[i].nganhHoc),stdin);
		sv[i].nganhHoc[strcspn(sv[i].nganhHoc,"\n")] = '\0';
		
		printf (" Nhap diem tb: "); 
		while(1){
			if (scanf ("%f",&sv[i].diemTB) == 1 && sv[i].diemTB >= 0 && sv[i].diemTB <= 10){
				break;
			}else{
				printf ("\n Diem khon hop le!\n Xin moi nhap lai: ");
				while (getchar() != '\n');
			}
		}
		
		getchar ();
	}
}

void output(struct sinhVien sv[], int n){
	printf ("\n Danh sach sinh vien da nhap: ");
	for (int i=0; i<n; i++){
		printf ("\n %d.\n Ten sv: %s",i+1,sv[i].tenSV);
		printf ("\n Mssv: %s",sv[i].mssv);
		printf ("\n Nganh hoc: %s",sv[i].nganhHoc);
		printf ("\n Diem tb: %.2f\n",sv[i].diemTB);
	}
}


int main (){
	int n;
	int f = 0;

    while (f!=1) {
        printf("\n Nhap so sinh vien can tra thong tin: ");

        if (scanf("%d", &n) != 1) {
            while (getchar() != '\n');
            printf(" Nhap vao khong hop le! Xin moi nhap lai.\n");
        } else if (n <= 0) {
            printf(" So sinh vien phai lon hon 0! Xin moi nhap lai.\n");
        } else {
            f = 1;
        }
    }

    while (getchar() != '\n');


	struct sinhVien sv[n];
	
	input(sv,n);
	output(sv,n);

return 0;
}

