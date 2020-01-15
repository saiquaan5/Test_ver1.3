#include <stdint.h>
#include <stdio.h>
#include <conio.h>

#define MAX             100

struct SinhVien
{
    char MS[10];
    char HT[100];
    int Tuoi;
    char DiaChi[100];
};

int NhapMangStruct(struct SinhVien *psv);
void XuatMangStruc(struct SinhVien sv);

// struct SinhVien a;
// struct SinhVien psv;
// struct SinhVien *sv = &psv;
void main()
{
    // strcpy(psv.HT,"NguyenVanDung");
    // printf("Ho ten: %s",sv->HT);
    struct SinhVien sv[MAX];
    int i =0,shs = 0;
    char MS[10];
    system("clear");
    printf("Chuong trinh thu mang struct\n");
    shs = NhapMangStruct(sv);
    printf("Trong danh sach co %d sinh vien",shs);
    printf("Moi ban nhap MS sinh vien de tim kiem.\n");
    gets(MS);
    i = 0;
    while(strcmp(sv[i].MS,MS)!=0 && i < shs)
    {
        i++;
    }
    if (i==shs)
    {
        printf("Ma so nay khong ton tai");
    }
    else
    {
        XuatMangStruc(sv[i]);
    }
}
int NhapMangStruct(struct SinhVien *psv)
{
    int i = 0;
    do
    {
        printf("Sinh vien thu %d",i+1);
        printf("Ma So: ");
        gets((psv+i)->MS);
        if (strcmp((psv+i)->MS,(char *)NULL)!=0)
        {
            printf("Ho ten: ");
            gets((psv+i)->HT);
            printf("Tuoi: ");
            scanf("%d",&(psv+i)->Tuoi);
            fflush(stdin);
            printf("Dia chi: ");
            gets((psv+i)->DiaChi);
        }
        
    }while(strcmp((psv+i)->MS,(char *)NULL)!=0);
    return (i);
}
void XuatMangStruc(struct SinhVien sv)
{   
    printf("Ma so sinh vien la: \n", sv.MS);
    printf("Ho ten sinh vien la: \n", sv.HT);
    printf("tuoi sinh vien la: \n", sv.Tuoi);
    printf("Dia chi sinh vien la: \n", sv.DiaChi);
}   