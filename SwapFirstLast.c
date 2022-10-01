#include <stdio.h>

int main()
{
    int a, n, rem, i, k, temp, arr[40], flag = 0;
    printf("Enter any number ");
    scanf("%d", &a);
   temp=a;

    while (a > 0)
    {
        a = a / 10;
        i++;
    }
    while (a != 0)

    {

        arr[flag] = temp % 10;

        flag++;

        temp /= 10;
    }
 

    return 0;
}
