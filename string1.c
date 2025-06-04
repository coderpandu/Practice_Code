#include <stdio.h>
#include <string.h>

int main()
{
    char str1[30], str2[40];
    int diff;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    diff = strcmp(str1, str2);
    printf("Difference in ASCII values: %d\n", diff);
    /* if (diff > 0)
    {
        printf("%s is greater than %s by ASCII value difference %d\n", str1, str2, diff);
    }
    else if (diff < 0)
    {
        printf("%s is less than %s by ASCII value difference %d\n", str1, str2, diff);
    }
    else
    {
        printf("%s is same as %s\n", str1, str2);
    } */
    return 0;
}
