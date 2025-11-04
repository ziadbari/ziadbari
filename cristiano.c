#include <stdio.h>
int main()
{
                int n,m;
printf("Enter the size of the array: ");
scanf("%d",&n);
           int a[n];
           printf("Enter the numbers of element to input (<=%d):",n);
           scanf("%d",&m);

           printf("Enter %d elements:\n",m);
           for(int i=0;i<m;i++)
           {
                           scanf("%d",&a[i]);

           }
           printf("array elements are:");
           for(int i=0;i<m;i++)
           {
                           printf("%d",a[i]);
           }
           return 0;

}
