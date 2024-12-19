#include <stdio.h>

int main(void)
{
                int year;
                printf("Enter a year: ");
                scanf("%d",&year);

                if(year%400==0)
                                printf("Leap year");
                else
                                printf("not leap year");

                return 0;
}
