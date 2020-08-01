#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct employee
{
    char name[100];
    char ID[100];
    int exp;
    float salary;
};
int main()
{
    int i=0;
    struct employee e[5];
    for(i=0;i<5;i++)
    {
        printf("\n  Enter  the   name  of employee%d:",(i+1));
        fflush(stdin);
        gets(e[i].name);
        printf("\n   Enter  the  ID    of employee%d:",i+1);
        fflush(stdin);
        gets(e[i].ID);
        printf("\nEnter the experience of employee%d:",i+1);
        fflush(stdin);
        scanf("%d",&e[i].exp);
        printf("\n Enter  the  salary  of employee%d:",i+1);
        fflush(stdin);
        scanf("%f",&e[i].salary);
    }
    for(i=0;i<5;i++)
    {
        printf("\nName       of employee%d :%s",i+1,e[i].name);
        printf("\nID         of employee%d :%s",i+1,e[i].ID);
        printf("\nExperience of employee%d :%d",i+1,e[i].exp);
        printf("\nSalary     of employee%d :%f\n",i+1,e[i].salary);
    }
    return 0;
}
