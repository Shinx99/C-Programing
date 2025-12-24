#include <stdio.h>
#include <string.h>

struct matHang {
    char maHang[10];
    char tenHang[30];
    double donGia;
};

// Ham phan loai tuoi
void tuoi() {
    int tuoi;
    int validInput = 0;
    
    while (!validInput) {
        printf("\nNhap tuoi: ");
        if (scanf("%d", &tuoi) != 1) {
            printf("\nTuoi khong hop le! Xin moi nhap lai.\n");
            while (getchar() != '\n'); // Xoa bo dem nhap
        } else if (tuoi < 0 || tuoi > 100) {
            printf("\nTuoi khong hop le! Xin moi nhap lai.\n");
        } else {
            validInput = 1;
        }
    }
    while (getchar() != '\n'); // Xoa ky tu newline con lai trong bo dem
    
    if (tuoi < 18) {
        printf("\nThieu nien");
    } else if (tuoi >= 18 && tuoi < 35) {
        printf("\nThanh nien");
    } else if (tuoi >= 35 && tuoi < 55) {
        printf("\nTrung nien");
    } else {
        printf("\nNguoi cao tuoi");
    }
}

// Ham tinh tong so le trong khoang
void soNguyen() {
    int min, max;
    int validInput = 0;

    while (!validInput) {
        printf("\nNhap min: ");
        if (scanf("%d", &min) != 1) {
            printf("\nGia tri khong hop le! Xin moi nhap lai.\n");
            while (getchar() != '\n'); // Xoa bo dem nhap
            continue;
        }

        printf("\nNhap max: ");
        if (scanf("%d", &max) != 1) {
            printf("\nGia tri khong hop le! Xin moi nhap lai.\n");
            while (getchar() != '\n'); // Xoa bo dem nhap
            continue;
        }

        if (min <= max) {
            validInput = 1;
        } else {
            printf("\nKhoang khong hop le! Min phai nho hon hoac bang Max.\n");
        }
    }
    while (getchar() != '\n'); // Xoa ky tu newline con lai trong bo dem

    int tong = 0;
    for (int i = min; i <= max; i++) {
        if (i % 2 != 0) {
            tong += i;
        }
    }
    printf("\nTong cac so le tu %d den %d la: %d\n", min, max, tong);
}

// Ham nhap du lieu mat hang
void input(struct matHang ds[3]) {
    for (int i = 0; i < 3; i++) {
        printf("\n%d.\nNhap ten hang: ", i + 1);
        fgets(ds[i].tenHang, sizeof(ds[i].tenHang), stdin);
        ds[i].tenHang[strcspn(ds[i].tenHang, "\n")] = '\0';

        printf("Nhap ma hang: ");
        fgets(ds[i].maHang, sizeof(ds[i].maHang), stdin);
        ds[i].maHang[strcspn(ds[i].maHang, "\n")] = '\0';

        printf("Nhap gia: ");
        while (scanf("%lf", &ds[i].donGia) != 1) {
            printf("Gia khong hop le! Xin moi nhap lai.\n");
            while (getchar() != '\n'); // Xoa bo dem nhap
            printf("Nhap gia: ");
        }
        while (getchar() != '\n'); // Xoa ky tu newline con lai trong bo dem
    }
}

// Ham chinh
int main() {
    int choice;

    do {
        printf("\nBai 1: Phan loai tuoi");
        printf("\nBai 2: Tinh tong so le trong khoang");
        printf("\nBai 3: Nhap va xuat mat hang");
        printf("\n\nChon bai: ");
        if (scanf("%d", &choice) != 1) {
            printf("\nLua chon khong hop le! Xin moi chon lai.\n");
            while (getchar() != '\n'); // Xoa bo dem nhap
            continue;
        }
        while (getchar() != '\n'); // Xoa ky tu newline con lai trong bo dem

        switch (choice) {
            case 1:
                tuoi();
                break;
            case 2:
                soNguyen();
                break;
            case 3:
                struct matHang danhSach[3];
                input(danhSach);
                for (int i = 0; i < 3; i++) {
                    printf("\n%d.\nTen hang: %s\nMa hang: %s\nGia: %.2f\n", i + 1, danhSach[i].tenHang, danhSach[i].maHang, danhSach[i].donGia);
                }
                break;
            default:
                printf("\nLua chon khong hop le! Xin moi chon lai.\n");
                break;
        }
    } while (choice < 1 || choice > 3);

    return 0;
}

