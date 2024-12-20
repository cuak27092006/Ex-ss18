#include<stdio.h>
int main(){
    struct Sinhvien{
    	int msv;
        char Ten[100];
        int tuoi;
        char std[20];
    };
    struct Sinhvien sinhvien01[50];
    int i;
    int tang=1;
    for (i= 0; i < 5; i++){
	    sinhvien01[i].msv = tang;
	    fflush(stdin);
	    printf("Nhap tem : ");
	    fgets(sinhvien01[i].Ten,sizeof(sinhvien01[i].Ten),stdin);
	    printf("Nhap tuoi : ");
	    scanf("%d",&sinhvien01[i].tuoi);
	    fflush(stdin);
	    printf("Nhap sdt : ");
	    fgets(sinhvien01[i].std,sizeof(sinhvien01[i].std),stdin);
	    tang++;
    }
    int j;
	for (j= 0; j < 5; j++){
        printf("In thong tin sinh vien thu %d\n",j+1);
	    printf("%d\n",sinhvien01[j].msv);
	    printf("%s\n",sinhvien01[j].Ten);
	    printf("%d\n",sinhvien01[j].tuoi);
	    printf("%s\n",sinhvien01[j].std);
    }
    return 0;
}
