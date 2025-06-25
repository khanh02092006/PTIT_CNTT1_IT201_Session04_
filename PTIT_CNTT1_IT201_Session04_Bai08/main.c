#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    do
    {
        printf(" nhap so phan  tu co trang mang");
        scanf("%d", &n);
        if (n<0)
        {
            printf(" so phan tu khong am");

        }
    } while (n<0);
    int *arr=(int *)malloc(n*sizeof(int));
    if (arr==NULL)
    {
        printf(" chua cap phat");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf(" nhap phan tu thu  %d", i+1);
        scanf("%d", &arr[i]);
    }
    int value;
    printf(" nhap gia tri can tim ");
    scanf("%d", &value);
    int cound =0;
    printf("vi tri co phan tu %d là :",value);
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==value)
        {
            printf("%d",i);
            cound =1;
        }
    }
    if (cound==0)
    {
        printf(" khong co phan tu nao");
    }
    free(arr);
    return 0;
}
