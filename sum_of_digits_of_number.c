#include<stdio.h>
int main()
{
    int n,sum=0,rem;
    printf("enter any number");
    scanf("%i",&n);
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;  
    }
    printf("\n sum of digits =%i",sum);
}