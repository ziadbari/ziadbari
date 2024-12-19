#include <stdio.h>


int main(void)
{
                char ch;
                printf("Enter any letters: ");
                scanf("%c",&ch);
                if(ch>='A' && ch<='Z')
                                printf("capital");

                else if(ch>='a' && ch<='z')

                printf("small");

                else
                                printf("not a letter");



                return 0;


}
