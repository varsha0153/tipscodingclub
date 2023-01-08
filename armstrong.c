#include<stdio.h>
#include<conio.h>
int main()
{
    int num, onum, rem, res=0;
    printf("Enter a three digit integer=");
    scanf("%d",&num);
    onum=num;

    while(onum!=0)
    {
        rem=onum%10;
        res=res+(rem*rem*rem);
        onum=onum/10;
    }

    if (res==num)
    printf("%d is an Armstrong number",num);
    else
    printf("%d is not a Armstrong number",num);
    getch();
    return 0;
}
