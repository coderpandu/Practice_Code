// write a program to print 100 natural number
//  kiran shiwakoti

#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}

// write a program to print odd numbers
// kiran shiwakoti

#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 100; i = i + 2)
    {
        printf("%d\n", i);
    }
    return 0;
}

// write a program to display n natural numbers.
// kiran shiwakoti

#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter number");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}

// write a program to display n natural odd number.
// kiran shiwakoti

#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter number");
    scanf("%d", &n);
    for (i = 1; i <= n; i = i + 2)
    {
        printf("%d\n", i);
    }
    return 0;
}

// write a program to display n natural even number
// kiran shiwakoti