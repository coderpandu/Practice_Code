// #include <stdio.h>

// int main() {
//     int i, n;

//     printf("Enter the limit: ");
//     scanf("%d", &n);

//     for(i = 1; i <= n; i++) {
//         if(i % 2 == 0)
//             printf("%d is Even\n", i);
//         else
//             printf("%d is Odd\n", i);
//     }

// printf("*****\n");
// printf("****\n");
// printf("***\n");
// printf("**\n");
// printf("*\n");

// int main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     while (n != 0)
//     {
//         if (n < 0)
//             break;
//         printf("Enter a number: ");
//         scanf("%d", &n);
//     }

// int main(){
//     int i, n=2;
//     for (i=1; i<=20; i++){
//         if (i == n){
//             n = n+2;
//             continue;
//         }
//         printf("%d\n", i);
//     }
//     return 0;

// How the nested loop works
/* #include <stdio.h>

int main()
{
  int i, j;

  for (i = 1; i <= 3; i++)
  {
    printf("Outer loop iteration: %d\n", i);
    for (j = 1; j <= 2; j++)
    {
      printf("Inner loop iteration: %d\n", j);
    }
  }

  return 0;
} */

#include <stdio.h>
int main()
{
  int n, r, s = 0, x;
  printf("Enter any number:");
  scanf("%d", &n);
  x = n; // store the original number
  while (n != 0)
  {
    r = n % 10;
    s = s * 10 + r;
    n = n / 10;
  }
  printf("Reverse number of %d is %d\n", x, s);
  return 0;
}
