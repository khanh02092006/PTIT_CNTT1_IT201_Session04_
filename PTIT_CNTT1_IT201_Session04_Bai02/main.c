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
            printf(" so luong phan tub khong hop le\n");
        }
    } while (n<=0);
    int *arr = (int*)malloc(n*sizeof(int));
    if (arr == NULL)
    {
        printf("chua duoc cap phat ");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("them phan tu thu %d", i+1 );
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int index = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            index = i;
        }
    }
    printf(" phan tu %d lon nhat tai chi so %d (vi tri thu %d)",max,index,index+1);
    free(arr);
    return 0;
}
