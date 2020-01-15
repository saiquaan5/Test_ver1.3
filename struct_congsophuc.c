#include <stdio.h>
#include <conio.h>
#include <string.h>

struct SoPhuc
{
    /* data */
    double Reg,Img;
};

void main()
{
    struct SoPhuc a, b, kq;
    printf("Nhap phan thuc va ao bien a: \n");
    scanf("%lf %lf",&a.Reg,&(a.Img));
    printf("Nhap phan thuc va ao bien b: \n");
    scanf("%lf %lf",&b.Reg,&b.Img);
    kq.Reg = a.Reg + b.Reg;
    
    kq.Img = a.Img + b.Img;
    
    // sizeof(kq);
    printf("Ket qua -> Phan thuc: %5.2lf,Phan ao: %5.2lf.",kq.Reg,kq.Img);
    // printf("\nkich thuoc theo byte kq = %d\n",sizeof(kg));
}
