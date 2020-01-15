#include        <string.h>
#include        <stdio.h>
#include        <conio.h>

struct SinhVien
{
    char MS[10];
    char HoTen[100];
    int Tuoi;
    char DiaChi[100];
};

void intri_struct(struct SinhVien a);

void main()
{
    struct SinhVien sv = {"41403279","NguyenVanDung",27,"539/10A CMT8,F15,Q10"};
    intri_struct(sv);
}

void intri_struct(struct SinhVien a)
{
    printf("---------------SV1------------\n");
    printf("MSSV = %s\n",a.MS);
    printf("Ho ten = %s\n",a.HoTen);
    printf("Tuoi: %d\n",a.Tuoi);
    printf("Dia chi: %s\n ----------------\n",a.DiaChi);
}