#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int id;
    char name[100];
    int age;
}  student;
int main(void)
{
int n;
    do
    {
        printf(" nhap so luong sinh vien");
        scanf("%d", &n);
        if(n < 1 || n>5)
        {
            printf(" so luong khong hop li\n");
        }
    } while(n < 1 || n>5);
    student *students = (student *) malloc(n * sizeof(student));
    if(students == NULL)
    {
        printf("chua cap phat ");
        return 1;
    }
    int id=0;
    for(int i = 0; i < n; i++)
    {
        printf(" nhap thong tin sinh vien thu %d",i+1);
        students[i].id = i+1;
        printf("ID:%d\n", students[i].id);

        printf("name:\n");
        getchar();
        fgets(students[i].name,sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name,"\n")] = '\0';

        printf("age:\n");
        scanf("%d", &students[i].age);
    }
    int seatch_id;
    int cound=0;
    printf(" nhap sinh vien can tim theo id");
    scanf("%d", &seatch_id);
    for(int i = 0; i < n; i++)
    {
        if (students[i].id == seatch_id)
        {
            printf(" tim thay xinh vien\n");
            printf("ID:%d\n", students[i].id);
            printf("name:%s\n", students[i].name);
            printf("age:%d\n", students[i].age);
            cound = 1;

        }
    }
    if(cound == 0)
    {
        printf(" khong tim thay sinh vien\n");
    } else
    {
        printf(" thong tim thay sinh vien\n");
    }
    free(students);
    return 0;
}