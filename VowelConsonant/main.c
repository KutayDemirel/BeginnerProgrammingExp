#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

    printf("Please enter character: ");
    scanf("%c", &ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf(" '%c' is vowel.", ch);
    }
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf(" \"%c\" is consonant.", ch);
    }
    else
    {
        printf("You have entered invalid character.");
    }
    return 0;
}

