#include <stdio.h>

struct nhanVien{
	char tenNV[50];
	int maNV;
	float luong;
};

int main (){
	struct nhanVien nv[1];
	for (int i=0; i<1; i++){
		printf ("\n Nhap ten nv: ");
		fgets(nv[i].tenNV,sizeof(nv[i].tenNV),stdin);
		printf (" Nhap ma nv: "); scanf("%d",&nv[i].maNV);
		printf (" Nhap luong: "); scanf("%f",&nv[i].luong);
	}
	for (int i=0; i<1; i++){
		printf ("\n Ten nv: %s",nv[i].tenNV);
		printf (" Ma nv: %d",nv[i].maNV);
		printf ("\n Luong: %.2f",nv[i].luong);
	}


return 0;
}

