#include <stdio.h>
#include <stdlib.h>
int main()
{
    int Year, Month, Date;
    int year, month, day;
    int Leapyear, Datevalid, Februaryvalid, Month30valid, Month31valid;
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
    Leapyear = (((Year % 100 != 0 && Year % 4 == 0) || Year % 400 == 0) == 1 ? 1 : 0);  //1¿¿¿¿¿2¿¿29¿
    Februaryvalid = (Leapyear == 0 && Month == 2 && Date < 29) || (Leapyear == 1 && Month == 2 && Date < 30);
    Month30valid = (Month == 4 || 6 || 9 || 11) && (Date < 31);
    Month31valid = (Month == 1 || 3 || 5 || 7 || 8 || 10 || 12) && (Date < 32);
    Datevalid = Februaryvalid || Month30valid || Month31valid;
    //printf("%d\n%d\n%d\n",Month31valid,Month==1||3||5||7||8||10||12,Month==8);//¿¿¿
    if (Datevalid == 1) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}
