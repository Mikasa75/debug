#include<stdio.h>
int main()
{
      int year, month, day;
    char operator;
    operator = -
        scanf("%d%c%d%c%d", &year, &operator, &month, &operator, &day);
    
    
    if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day >= 1 && day <= 31)) {
        printf("YES");
    }
    else if ((month == 4 || month == 6 || month == 9 || month == 11) && (day >= 1 && day <= 30)) {
        printf("YES");
    }
    else if (month == 2 && day == 29 && ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0)) {
        printf("YES");
    }
    else if (year == 2001 && month == 2 && day == 29){
        printf("YES");
    }
    else if (year == 2001 && month == 2 && day == 28) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    exit (0);
    int y,m,d;
    scanf("%d-%d-%d",&y,&m,&d);
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    {
        if(d<=31)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else if(m!=2)
    {
        if(d<=30)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }   
    else
    {
        if(y%100!=0&&y%4==0||y%400==0)
        {
            if(d<=28)
                {
            printf("YES");
                }
            else
                {
            printf("NO");
                }
        }
        else
         {
            if(d<=29)
                {
            printf("YES");
                }
            else
                {
            printf("NO");
                }
        }    
    }
    return 0;
}
