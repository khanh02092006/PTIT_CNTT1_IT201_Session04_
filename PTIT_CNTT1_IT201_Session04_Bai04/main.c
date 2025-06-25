#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    do
    {
        printf(" nhap so luong phan tu ");
        scanf("%d", &n);
        if (n<=0)
        {
            printf(" mang khong duoc rỗng ");

        }
    } while (n<=0);
    int *arr = (int*)malloc(n*sizeof(int));
    if (arr == NULL)
    {
        printf(" chua duoc cap phat");
    }
    for (int i=0; i<=n; i++)
    {
        printf(" nhap phan tu thu %d",i+1);
        scanf("%d",&arr[i]);
    }
    int value;
    int trung=-1;
    printf(" nhap phan tu can tim ");
    scanf("%d",&value);
    for (int i=0; i<=n; i++)
    {
        if (arr[i]==value)
        {
            trung=i;
        }
    }
    if (trung!=-1)
    {
        printf(" phan tu thu %d xuat hien chi so %d ",value,trung);


    } else
    {
        printf(" phan tu %d khong xuat hien trong mang");
    }
    return 0;
}
