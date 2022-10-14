#include<stdio.h>
int firstdayofayear(int year)
{

   return (year*365 +((year-1)/4)-((year-1)/100)+((year-1)/400))%7;
}

int main()
{
    int arradays[12]={31,28,31,30,31,30,31,31,30,31,30,31},day,month,year,i,daycoun=0,k,k1,j;
    char *days[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saterday"};
    printf("\nEnter your date as day,month,year: ");
    scanf("%d%d%d",&day,&month,&year);
    k=firstdayofayear(year);

    if(year%4==0 && year%100!=0 ||year%400==0)
    {
        arradays[1]=29;
        printf("It is a leapyear you know:");
    }
    //day counting
    for(i=1;i<month;i++)
    {

        daycoun=daycoun+arradays[i-1];
    }
    daycoun=daycoun+day;
    k1=firstdayofayear(year);
    k=firstdayofayear(year);

    for(j=k1;j<daycoun+k1-1;j++)
    {
        k=k+1;

        if(k==7)
        {
            k=0;
        }
    }
    printf("\n%s",days[k]);

}

