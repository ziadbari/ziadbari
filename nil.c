#include <stdio.h>

int main(void)

{
                float base,height,area;

                printf("Enter base: ");
                scanf("%f",&base);

                printf("Enter height: ");
                scanf("%f",&height);
                area = 0.5*base*height;

                printf("area of triangle=%f\n",base,height,area);

                return 0;
}
