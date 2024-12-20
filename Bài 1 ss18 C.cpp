#include <stdio.h>
#include <string.h>

struct Sinhvien {
    char Ten[100];
    int tuoi;
    char sdt[15];
};

int main() {
    struct Sinhvien Sinhvien01 = {"Pham Quoc Khanh", 18, "0357492709"};
    struct Sinhvien Sinhvien02;

    printf("Ho va ten: %s\n", Sinhvien01.Ten);
    printf("Tuoi: %d\n", Sinhvien01.tuoi);
    printf("So dien thoai: %s\n", Sinhvien01.sdt);

    return 0;
}

