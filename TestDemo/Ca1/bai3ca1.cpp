#include <stdio.h>
#include <string.h>

struct student{
	char tenSV[50];
	char maSV[20];
	float diemT;
	char ketQua[20];
};




int main (){
	
	struct student sv[1];
	for (int i=0;i<1;i++){
		printf ("\n Nhap ten: ");
		fgets(sv[i].tenSV,sizeof(sv[i].tenSV),stdin);
		sv[i].tenSV[strcspn(sv[i].tenSV,"\n")] = '\0';
		
		printf (" Nhap ma: ");
		fgets(sv[i].maSV,sizeof(sv[i].maSV),stdin);
		sv[i].maSV[strcspn(sv[i].maSV,"\n")] = '\0';
		
		printf (" Nhap diem: ");
		while(1){
			if (scanf ("%f",&sv[i].diemT) == 1 && sv[i].diemT >= 0 && sv[i].diemT <=10){
				break;
			}else{
				printf ("\n Khong hop le!\n Nhap lai diem: ");
				while(getchar() != '\n');
			}
		}
		
		if (sv[i].diemT >= 5){
			printf ("\n Ket qua: Dau");
		}else{
			printf ("\n Ket qua: Rot");
		}
			
	}


return 0;
}

