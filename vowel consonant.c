#include <stdio.h>
int main(void)
{
                char ch;
                printf("Enter any letters: ");
                scanf("%c",&ch);
                if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                printf("vowel");
                else
                printf("consonant");
                return 0;
}
