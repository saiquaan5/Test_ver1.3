#include <stdio.h>

#define MAX             100

void InputArr(int a[],int n);
int Sum_Odd(int a[],int n);
int Sum_Even(int a[],int n);

void main()
{
    int n,a[MAX];
    do
    {
        printf("Nhap kich thuoc mang: \n");
        scanf("%d",&n);
    } while (n <  1 | n >100);
    InputArr(a,n);
    printf("Chan = %d\n",Sum_Even(a,n));
    printf("Le = %d\n",Sum_Odd(a,n));
    
}

void InputArr(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        // printf("Nhap phan tu a[%d] = ",i+1);
        do
        {
            printf("Nhap phan tu a[%d] = ",i+1);
            scanf("%d",&a[i]);
            printf("\n");
        } while (a[i] < 0 || a[i] > 1000);
    }
}


int Sum_Odd(int a[],int n)
{
    int Odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2!=0)
        {
            Odd+=a[i];
        }
        
    }
    return Odd;
    
}
int Sum_Even(int a[],int n)
{
    int Even = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2 !=0)
        {
            continue;
        }
        Even+=a[i];
    }
    return Even;
}