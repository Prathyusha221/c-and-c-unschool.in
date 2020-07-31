#include<stdio.h>
int main()
{
    int sum=0;





    int n;
    do{
        printf("enter a number: \n");
        scanf("%d\n", &n);
        sum=sum+n;
    }while(n!=0);
    printf("sum=%d", sum);
    return 0;
}






