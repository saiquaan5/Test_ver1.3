#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <stdint.h>

#define MAX         50
struct Struc_mang
{
    char MS[10];
    char HT[100];
    int Tuoi;
    char DiaChi[100];
};

// struct Struc_mang sv[100];

void main()
{
    struct Struc_mang sv[MAX];
    int i = 0, shs = 0;
    char MS[10];
    // printf("ddd");
    // clrscr();
    system("clear");
    printf("Chuong trinh thu mang struct.\n");
    do
    {
        /* code */
        printf("Sinh vien %d\n",i+1);
        printf("Ma so: ");
        gets(sv[i].MS);
        if (strcmp(sv[i].MS, (char *)NULL !=0))
        {
            /* code */
            printf("Ho ten: ");
            gets(sv[i].HT);
            scanf("%d",&sv[i].Tuoi);
            fflush(stdin);
            printf("Dia chi: ");
            gets(sv[i].DiaChi);
        }
    } while (strcmp(sv[i++].MS,(char *)NULL != 0));
    shs= --i;
    printf("");
}