#include<stdio.h>
int main()
{
    int i,J;
    printf("Enter value i:");
    scanf("%d", &i);
    J=(i++)+(++i);
    printf("%d", J=(i++)+(++i));
    printf("\ni=%d",i);
}
