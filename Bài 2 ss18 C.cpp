#include <stdio.h>
#include <string.h>

struct Sinhvien {
    char Ten[100];
    char tuoi[10];
    char sdt[15];
};

int main() {
	printf ("\n nhap thong tin sinh vien \n");
	
    struct Sinhvien Sinhvien02;
    
    printf ("Nhap ten : ");
    fgets (Sinhvien02.Ten, sizeof(Sinhvien02.Ten), stdin);
    printf ("nhap tuoi : ");
    fgets (Sinhvien02.tuoi, sizeof(Sinhvien02.tuoi), stdin);
    printf ("Nhap so dien thoai : ");
    fgets (Sinhvien02.sdt, sizeof(Sinhvien02.sdt), stdin);
    
    printf("\nThong tin sinh vien:\n");
    printf("Ho va ten: %s", Sinhvien02.Ten);
    printf("Tuoi: %s", Sinhvien02.tuoi);
    printf("So dien thoai: %s", Sinhvien02.sdt);

    return 0;
}
