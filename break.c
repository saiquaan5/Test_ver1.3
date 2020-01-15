#include <stdio.h>
#include <stdbool.h>

void NhapSoNguyen(int n)
{
    printf("Nhap vao so nguyen: \n");
    scanf("%d",&n);
}

void Check(int *n)
{
    printf("Var %d\n",n);
    // bool VarCheck = true;
    // int VarLast = 0;


    // VarLast = *n % 10;
    // printf("VarLast %d\n",VarLast);
    // printf("Var Check %d\n",VarCheck);

    // while(n > 0)
    // {
    //     if (VarLast % 2!=0)
    //     {
    //         VarCheck = false;
    //         break;
    //     }
    //     n /= 10;
    // }
    // if (VarCheck)
    // {
    //     printf("Cac chu so la so chan\n");
    // }
    // else
    // {
    //     /* code */
    //     printf("Cac chu so khong la so chan\n");
    // }
}

void main()
{
    int a;
    NhapSoNguyen(a);
    Check(a);
}
 
// #include <stdio.h>
// #include <stdbool.h>
// int main(){
//     int number;
//     printf("\nNhap number = ");
//     scanf("%d", &number);
 
//     bool allEven = true; // Giả sử ban đầu là đúng
//     int last;
//     while(number > 0){
//         last = number % 10; // lấy c/số cuối của number
 
//         if(last % 2 == 1){
//             allEven = false;
//             break; // thoát vòng lặp
//         }
//         number /= 10; // bỏ chữ số cuối của number
//     }
    
//     if(allEven){
//         printf("\nToan chu so chan!");
//     }else{
//         printf("\nCo chu so le!");
//     }
 
// }