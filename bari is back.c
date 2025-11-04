#include <stdio.h>
int main()
{
int n,m;
printf("Enter the size of the array: ") ;
scanf("%d",&m);

int a[n];
printf("Enter the number of the element to take input (<=%d):",n);
scanf("%d",&n);

printf("Enter %d elements: \n",m);
for(int i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
printf("Array elements are: ");
for(int i=0;i<m;i++)
{
printf("%d",a[i]);
}
return 0;

}


