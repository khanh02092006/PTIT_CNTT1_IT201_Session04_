#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    do
    {
        printf("nhap so luong phan tu trong mang ");
        scanf("%d", &n);
        if (n<=0)
        {
            printf(" so luong phan tu khong hop le");

        }
    }while (n<=0);
    int *arr = (int*)malloc(n*sizeof(int));
    if (arr==NULL)
    {
        printf(" chua duoc cap phat");
        return 1;
    }
    int check=0;
    int value;
    for (int i=1; i<=n; i++)
    {
        printf(" nhap phan tu thu %d",i+1);
        scanf("%d",arr[i] );
    }
    printf("nhap gia tri can tim");
    scanf("%d",&value);
    for (int i=1; i<=n; i++)
    {
        if (arr[i]==value)
        {
            printf(" gia tri %d xuat hien tai phan thu thu %d",value,i+1);
            check=1;
            break;
        }
    }
    if (check==1)
    {
        printf("  phan tu thu %d co ton tai",value);
    }
free(arr);
    return 0;
}
