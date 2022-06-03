#include "stdio.h"
#include "limits.h"
void nhapmang(int x[100], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("x[%d]= ", i);
        scanf("%d", &x[i]);
    }
}
void xuatmang(int x[100], int n)
{
    printf("\nMang vua nhap: ");
    for (int i=0;i<n;i++)
    {
        printf("%d ", x[i]);
    }
}
void xoataivitri(int x[100], int &n, int vitri)
{

    for(int i=vitri; i<n-1; i++)
    {
        x[i]=x[i+1];
    }
    n--;
}
void xoatheogiatri(int x[100], int &n)
{
    int gt;
    printf("\nGia tri can xoa: ");
    scanf("%d", &gt);
    for(int i=0; i<n; i++)
    {
        if (x[i]==gt)
        xoataivitri(x, n, i);
    }
}
int main()
{
    int a[100],n,m ;
    do{
        printf("Nhap vao so phan tu cua mang n (0<n<=100): ");
        scanf("%d", &n);
    }while(n<=0||n>100);
    nhapmang(a,n);
    xuatmang(a,n);
    xoatheogiatri(a,n);
    xuatmang(a,n);
}
