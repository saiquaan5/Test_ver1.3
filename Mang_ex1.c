#include <stdio.h>

#define MAX             5

// void InputIndex();
void InputArr(int a[],int n);
void OutputArr(int a[],int n);
int SearchArr(int a[],int n, int v);

void main()
{
    // int arr[MAX] = {1,2,3,4,5};
    // // int array[MAX];
    // // array[0] = 4;
    // for (int index = 0; index < MAX; index++)
    // {
    //     printf("a[%d] = %d\n",index+1,arr[index]);
    // }
    int n;
    int a[MAX];
    do
    {
        printf("Nhap kich thuoc mang: \n");
        scanf("%d",&n);
    } while (n<1);
    printf("\n======NHAP MANG=====\n");
    InputArr(a,n);
    printf("\n======XUAT MANG=====\n");
    OutputArr(a,n);  
    printf("\n======TIM KIEM======\n");
    printf("Chi so tim kiem trong mang la: %d\n",SearchArr(a,n,2));
}
void InputArr(int a[],int n)
{
    for(int i = 0; i < n ; i++)
    {
        printf("Nhap phan tu a[%d]= \n",i+1);
        scanf("%d",&a[i]);
    }
}
void OutputArr(int a[],int n)
{
    for(int i = 0; i < n ; i++)
    {
        printf("a[%d] = %d\n",i+1,a[i]);
        // scanf("%d",&a[i]);
    }
}

int SearchArr(int a[],int n, int v)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == v)
        {
            return i+1;
        }
    }
    return -1;
    
}
