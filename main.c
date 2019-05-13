#include <stdio.h>
#include <stdlib.h>
/*with return type with parameters*/
int factorial(int num);
int main()
{
    int num;

    printf("Enter a number : ");
    scanf("%d",&num);

    printf("\n\n%d! = %d", num, factorial(num));
    return 0;
}

int factorial(int num)
{
    int fact=1;
    for(int i=num; i>0; i--)
    {
        fact*=i;
    }
    return fact;

}
