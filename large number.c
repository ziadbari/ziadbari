#include <stdio.h>

int main(void)
{
                int num1,num2,num3;

                printf("enter 3 numbers: ");
                scanf("%d%d%d",&num1,&num2,&num3);
                if (num1>num2 && num1>num3)
                printf("large=%d",num1);
                else if (num2>num1 && num2>num3)
                                printf("Large=%d",num2);
                else if(num3>num2 && num3>num1)
                                printf("Large=%d",num3);
                else
                                printf("numbers are equal");

                return 0;
}
