#include <stdio.h>
#include <conio.h>
#include <string.h>

struct NgaySinh
{
    int ngay;
    int thang;
    int nam;
};


struct SinhVien
{
    char MS[10];
    char HoTen[100];
    struct NgaySinh ngaysinh;
    char DiaChi[];
}Nam;



void main()
{
    // struct SinhVien Nam = {"41403279","NguyenVanDung",21,"539/10A CMT8"};
    // // while(1)
    // // {
    // // strcpy(Nam.MS,"41403279");
    // printf("MSSV: %s\n",Nam.MS);
    // // Nam.ngaysinh.ngay = 12;
    // printf("Ngay sinh la: %d\n",Nam.ngaysinh.ngay);
    // }

    struct SinhVien sv1,sv2;
    strcpy(sv1.MS,"41403279");
    strcpy(sv1.HoTen,"NguyenVanDung");
    sv1.ngaysinh.ngay = 9;
    sv1.ngaysinh.thang = 8;
    sv1.ngaysinh.nam = 1992;
    // strcpy(sv1.HoTen,"NguyenVanDung");
    strcpy(sv1.DiaChi,"539/10A CMT8, F15, Q10");

    sv2 = sv1;

    printf("---------------SV1------------\n");
    printf("MSSV = %s\n",sv1.MS);
    printf("Ho ten = %s\n",sv1.HoTen);
    printf("Ngay,Thang, Nam = %d\t%d\t%d\n",sv1.ngaysinh.ngay,sv1.ngaysinh.thang,sv1.ngaysinh.nam);
    printf("Dia chi: %s",sv1.DiaChi);

    printf("---------------SV2------------\n");
    printf("MSSV = %s\n",sv2.MS);
    printf("Ho ten = %s\n",sv2.HoTen);
    printf("Ngay,Thang, Nam = %d\t%d\t%d\n",sv2.ngaysinh.ngay,sv2.ngaysinh.thang,sv2.ngaysinh.nam);
    printf("Dia chi: %s",sv2.DiaChi);


}