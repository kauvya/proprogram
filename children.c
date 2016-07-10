#include<stdio.h>
#include<conio.h>
void main()
{
    int m,p,ctr,ctr1;
    int flag=0;
    printf("\n Enter value=");
    scanf("%d",&m);
    p=2*m;
    for(ctr=1;ctr<p;ctr++)
    {
       for(ctr1=ctr+1;ctr1<=p;ctr1++)
       {
          printf("(%d,%d)\n",ctr,ctr1);
          flag++;
       }
    }
    printf("No of paires =%d",flag);
    getch();
}
