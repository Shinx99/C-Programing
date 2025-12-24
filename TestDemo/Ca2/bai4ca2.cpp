#include <stdio.h>
#include <string.h>

struct hangHoa{
	char tenH[50];
	int maH;
	int soL;
};
void input(struct hangHoa h[], int n){
	for (int i=0; i<n; i++){
		printf ("\n %d.\n Nhap ten hang: ",i+1);
		fgets(h[i].tenH,sizeof(h[i].tenH),stdin);
		h[i].tenH[strcspn(h[i].tenH,"\n")] = '\0';
		
		printf (" Nhap ma hang: ");
		scanf ("%d",&h[i].maH);
		printf (" Nhap so luong: ");
		scanf ("%d",&h[i].soL);
		while(getchar() != '\n');
		
	}
}
void output(struct hangHoa h[], int n){
	printf ("\n Ten hang da nhap vao: ");
	for (int i=0; i<n; i++){
		printf ("\n %d.\n Nhap ten hang: %s ",i+1,h[i].tenH);
		printf ("\n Nhap ma hang: %d ",h[i].maH);
		printf ("\n Nhap so luong: %d ",h[i].soL);
	}
}
void arrange(struct hangHoa h[], int n){
	struct hangHoa temp;
	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			if (h[i].soL > h[j].soL){
				temp = h[i];
				h[i] = h[j];
				h[j] = temp;
			}
		}
	}
	printf ("\n\n Danh sach sau khi sap xep: ");
	for (int i=0; i<n; i++){
		printf ("\n %d.\n Nhap ten hang: %s ",i+1,h[i].tenH);
		printf ("\n Nhap ma hang: %d ",h[i].maH);
		printf ("\n Nhap so luong: %d ",h[i].soL);
	}
}

int main (){
	
	int n;
	printf ("\n Nhap so luong hang hoa: ");
	while(1){
		if (scanf ("%d",&n) == 1 && n>0){
			getchar();
			break;
		}else{
			printf ("\n Khong hop le!\n Nhap lai: ");
			while(getchar() != '\n');
		}
	}
	struct hangHoa h[n];
	input(h,n);
	output(h,n);
	arrange(h,n);

return 0;
}

