#include <stdio.h>

#define MAX         100

void InputArr(int a[],int n);
void OutputRevertArr(int a[],int n);

void main()
{
    int n,arr[MAX];
    do
    {
        printf("Nhap kich thuoc mang: \n");
        scanf("%d",&n);
    } while (n <  1 | n >100);
    InputArr(arr,n);    
    OutputRevertArr(arr,n);    
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
void OutputRevertArr(int a[],int n)
{
    for (int i = n-1; i >= 0 ; i--)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }
}
