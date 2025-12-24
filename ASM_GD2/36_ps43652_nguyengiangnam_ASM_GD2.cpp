#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

struct student{
	char name[50];
	float score;
};

struct number {
    int ts; 
    int ms;
};

//kiem tra so nguyen
int soNguyenTo(int x){
	if (x<2) return 0;
	for (int i=2; i<= sqrt(x); i++){
		if (x%i == 0) return 0;
	}
	return 1;
}
int soChinhPhuong(int x){
	int a = sqrt(x);
	return a*a == x;
}
void checkNumber(int x){
	printf ("\n Nhap so: "); 
	if(scanf ("%d",&x) == 1){
		printf ("\n %d la so nguyen",x);
		if (soNguyenTo(x)){
			printf ("\n %d la so nguyen to",x);
		}else {
			printf ("\n %d khong phai so nguyen to",x);
		}
		if (soChinhPhuong(x)){
			printf ("\n %d la so chinh phuong",x);
		}else {
			printf ("\n %d khong phai la so chinh phuong",x);
		}
	}else {
		printf ("\n %d khong phai so nguyen",x);
	}
}

//Tim uoc so chung và boi so chung
int uc(int x, int y){
	while (y != 0){
		int temp = y;
			y = x%y;
			x = temp;
	}
	return x;
}
int bc(int x, int y){
	return (x*y)/uc(x,y);
}
void cn2(){
	int x,y;
		printf ("\n x = "); scanf ("%d",&x);
		printf (" y = "); scanf ("%d",&y);
	int ucln = uc(x,y);
	int bcnn = bc(x,y);
		printf ("\n Uoc chung lon nhat cua %d va %d la: %d",x,y,ucln);
		printf ("\n Boi chung nho nhat cua %d va %d la: %d",x,y,bcnn);
}

//Tinh tien karaoke
void karaoke(){
	int start, finish;
	do{
		printf ("\n Gio bat dau: "); scanf ("%d",&start);
		printf (" Gio ket thuc: "); scanf ("%d",&finish);
	}while(start>finish || start<12 || finish>23);
	
	double sumH, sum;
		sumH = finish - start;
	if (sumH<=3){
		sum = sumH * 150000;
	}else {
		sum = (3*150000) + ((sumH-3)*150000*0.7);
	}
	if (start>=14 && finish<=17){
		sum = sumH*0.9;
	}
	printf ("\n So tien can thanh toan la: %.2lf",sum);
}

//Tinh tien dien
void tienDien(){
	
	const double bac1 = 1.678, bac2 = 1.734, bac3 = 2.014, bac4 = 2.536, bac5 = 2.834, bac6 = 2.927;
	double a,b;
do {
	printf ("\n So kWh su dung: ");
	scanf ("%lf",&a);
}while (a<0);
	
	 if (a <= 50){
	 	b = a * bac1;
	}else if (a <= 100){
		b = (50 * bac1)+(a-50)*bac2;
	}else if (a <= 200){
		b = (50 * bac1)+(100-50)*bac2 + (a-100)*bac3;
	}else if (a <= 300){
		b = (50 * bac1)+(100-50)*bac2 + (200-100)*bac3 + (a-200)*bac4;
	}else if (a <= 400){
		b = (50 * bac1)+(100-50)*bac2 + (200-100)*bac3 + (300-200)*bac4 + (a-300)*bac5;
	}else{
		b = (50 * bac1)+(100-50)*bac2 + (200-100)*bac3 + (300-200)*bac4 + (400-300)*bac5 + (a-400)*bac6;
	}printf ("so tien can phai dong la %.3lf",b);

}

//Tinh lai suat ngan hang
void laiXuat(){
	//p la so tien vay
	// r là lãi xuat hang thang
	double p, r, sumMoney;
	int month = 12;
	do{
		printf ("\n Nhap so tien can vay: "); scanf ("%lf",&p);
	}while (p<0);
	r = 0.05;
	sumMoney = (p*r*pow(1+r,month))/(pow(1+r,month)-1);
	printf ("\n So tien lai can tra trong 12 thang la: %.2lf ",sumMoney);
}

//Nhap thong tin sv
void input(struct student sv[], int n){
	
	for (int i=0; i<n; i++){
		printf ("\n %d. Ho va Ten: ",i+1);
		fgets(sv[i].name,sizeof(sv[i].name),stdin);
		sv[i].name[strcspn(sv[i].name,"\n")] = '\0';
		
		printf (" Nhap diem: ");
		while(1){
			if (scanf ("%f",&sv[i].score) == 1 && sv[i].score >= 0 && sv[i].score <= 10){
				break;
			}else{
				printf ("\n Diem khon hop le!\n Xin moi nhap lai: ");
				while (getchar() != '\n');
			}
		}
		getchar();
	}
}
void arrange(struct student sv[], int n){
	struct student temp;
	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			if (sv[i].score < sv[j].score){
				 temp = sv[i];
				sv[i] = sv[j];
				sv[j] = temp;
			}
		}
	}
	printf ("\n Danh sach sinh vien duoc sap xep: ");
	for (int i=0; i<n; i++){
		printf ("\n %d. Ho va ten: %s\n",i+1,sv[i].name);
		printf ("   Diem TB: %.2f",sv[i].score);
		
		if (sv[i].score>=9){
			printf ("\n   Hoc luc xuat sac");
		}else if (sv[i].score>=8){
			printf ("\n   Hoc luc gioi");
		}else if (sv[i].score>=6.5){
			printf ("\n   Hoc luc kha");
		}else if (sv[i].score>=5){
			printf ("\n   Hoc luc trung binh");
		}else {
			printf ("\n   Hoc luc yeu");
		}
	}
	
}

//Tinh phan so
void numIn(struct number nb[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\n Nhap phan so %d:\n Nhap tu so: ", i + 1);
        scanf("%d", &nb[i].ts);
        printf(" Nhap mau so: ");
        while (1) {
            scanf("%d", &nb[i].ms);
            if (nb[i].ms != 0) {
                break;
            } else {
                printf("Mau so phai khac 0. Xin moi nhap lai: ");
            }
        }
    }
}

void numOut(struct number ps) {
    printf("%d/%d\n", ps.ts, ps.ms);
}
int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void rutGon(struct number *ps) {
    int temp = ucln(abs(ps->ts), abs(ps->ms));
    ps->ts /= temp;
    ps->ms /= temp;
}
struct number sum(struct number ps1, struct number ps2) {
    struct number kq;
	    kq.ts = ps1.ts * ps2.ms + ps2.ts * ps1.ms;
	    kq.ms = ps1.ms * ps2.ms;
	    rutGon(&kq);
    return kq;
}
struct number hieu(struct number ps1, struct number ps2) {
    struct number kq;
	    kq.ts = ps1.ts * ps2.ms - ps2.ts * ps1.ms;
	    kq.ms = ps1.ms * ps2.ms;
	    rutGon(&kq);
    return kq;
}
struct number tich(struct number ps1, struct number ps2) {
    struct number kq;
	    kq.ts = ps1.ts * ps2.ts;
	    kq.ms = ps1.ms * ps2.ms;
	    rutGon(&kq);
    return kq;
}
struct number thuong(struct number ps1, struct number ps2) {
    struct number kq;
	    kq.ts = ps1.ts * ps2.ms;
	    kq.ms = ps1.ms * ps2.ts;
    if (kq.ms == 0) {
        kq.ts = 0;
        kq.ms = 1;
    } else {
        rutGon(&kq);
    }
    return kq;
}	

int main (){
	int chon, chonP;
	while (1){
	printf ("\t$--------------------------------------------------------$");
	printf ("\n\t* Chuc nang 1: Kiem tra so nguyen \t\t\t *");
	printf ("\n\t* Chuc nang 2: Tim uoc so chung va boi so chung cua 2 so *");
	printf ("\n\t* Chuc nang 3: Tinh tien cho quan Karaoke \t\t *");
	printf ("\n\t* Chuc nang 4: Tinh tien dien \t\t\t\t *");
	printf ("\n\t* Chuc nang 5: Chuc nang doi tien \t\t\t *");
	printf ("\n\t* Chuc nang 6: Tinh lai xuat ngan hang vay tra gop \t *");
	printf ("\n\t* Chuc nang 7: Vay tien mua xe \t\t\t\t *");
	printf ("\n\t* Chuc nang 8: Sap xep thong tin sinh vien \t\t *");
	printf ("\n\t* Chuc nang 9: Xay dung gamme FPOLY-LOTT \t\t *");
	printf ("\n\t* Chuc nang 10: Tinh toan phan so \t\t\t *");
	printf ("\n\t$--------------------------------------------------------$");
	printf ("\n\n Xin moi chon chuc nang: "); scanf ("%d",&chon);
	
	while (chon<1 || chon>10){
		printf("Lua chon khong hop le! Xin moi nhap lai: ");
        scanf("%d", &chon);
	}
	
	switch (chon){
		case 1:
			int x;
			checkNumber(x);
			break;
		case 2:
			cn2();
			break;
		case 3:
			karaoke();
			break;
		case 4:
			tienDien();
			break;
		case 5:
			printf ("\n Chuc nang dang xay dung! Quay lai sau!");
			break;
		case 6:
			laiXuat();
			break;
		case 7:
			printf ("\n Chuc nang dang duoc xay dung! Quay lai sau!");
			break;
		case 8:
			int n;
			printf ("\n Nhap so luong sinh vien can tra cuu: ");
			while (1){
				if (scanf ("%d",&n) == 1 && n>0){
					getchar();
					break;
				}else{
					printf ("\n Khong hop le!\n Nhap lai: ");
					while (getchar() != '\n');
				}
			}
			if (n>0 && n<=100){
				struct student sv[n];
				input(sv,n);
				arrange(sv,n);
			}else{
				printf ("\n So luong sinh vien khong hop le!");
			}
			break;
		case 9:
			printf ("\n Chuc nang dang duoc xay dung! Quay lai sau!");
			break;
		case 10:
			 int m = 2;
		    struct number nb[m];
		
		    numIn(nb, m);
		    printf("\n Phan so 1: ");
		    numOut(nb[0]);
		    printf(" Phan so 2: ");
		    numOut(nb[1]);
		
		    struct number kqSum = sum(nb[0], nb[1]);
			    printf("\n Tong hai phan so: ");
			    numOut(kqSum);
		    struct number kqHieu = hieu(nb[0], nb[1]);
			    printf(" Hieu hai phan so: ");
			    numOut(kqHieu);
		    struct number kqTich = tich(nb[0], nb[1]);
			    printf(" Tich hai phan so: ");
			    numOut(kqTich);
		    struct number kqThuong = thuong(nb[0], nb[1]);
		    	printf(" Thuong hai phan so: ");
		    	numOut(kqThuong);
					break;
	}
		do{
			printf("\n\n\t\t$=======================================$");
            printf("\n\t\t$ 1. Quay lai Menu \t\t\t$");
            printf("\n\t\t$ 2. Thoat chuong trinh \t\t$");
            printf("\n\t\t$=======================================$");
            printf("\n\t Nhap so tiep tuc: ");
            scanf("%d", &chonP);
		}while(chonP <1 || chonP >2);
		
		if (chonP==2){
				printf("\n\t\t\t\tHen gap lai!");
                exit (0);
		}
	}
return 0;
}

