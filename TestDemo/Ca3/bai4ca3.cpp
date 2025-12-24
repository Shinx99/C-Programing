#include <stdio.h>
#include <string.h>

struct nhanVien{
	char tenNV[50];
	int maNV;
	float luong;
};

void in(struct nhanVien nv[]){
	for (int i=0; i<3; i++){
		printf ("\n %d.\n Nhap ten nv: ",i+1);
		fgets(nv[i].tenNV,sizeof(nv[i].tenNV),stdin);
		nv[i].tenNV[strcspn(nv[i].tenNV,"\n")] = '\0';
		
		printf (" Nhap ma nv: "); 
		scanf("%d",&nv[i].maNV);
		printf (" Nhap luong: "); 
		scanf("%f",&nv[i].luong);
		while(getchar() != '\n');
	}
}
void out(struct nhanVien nv[]){
	printf ("\n\n Nhan vien da nhap: ");
	for (int i=0; i<3; i++){
		printf ("\n %d.\n Ten nv: %s",i+1,nv[i].tenNV);
		printf ("\n Ma nv: %d",nv[i].maNV);
		printf ("\n Luong: %.2f\n",nv[i].luong);
	}
}
void ho(struct nhanVien nv[]){
	printf ("\n\n Nhan vien ho 'Nguyen': ");
	for (int i=0; i<3; i++){
		if (strncmp(nv[i].tenNV,"Nguyen",6) == 0){
			printf ("\n %d.\n Ten nv: %s",i+1,nv[i].tenNV);
			printf ("\n Ma nv: %d",nv[i].maNV);
			printf ("\n Luong: %.2f\n",nv[i].luong);
		}
	}
}

int main (){
	struct nhanVien nv[3];
	in(nv);
	out(nv);
	ho(nv);


return 0;
}

