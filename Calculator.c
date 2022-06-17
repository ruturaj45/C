#include <stdio.h>
#include <conio.h>
int main()
{
    // Declaring Values
    int a, b;
    double c;
    char operator;

    printf("Enter the value of A : ");
    scanf("%d", &a);

    printf("\nEnetr the operator ( + , - , * , / ) : ");
    scanf(" %c", &operator);

    printf("\nEnter the value of B : ");
    scanf("%d", &b);

    switch (operator)
    {

    case '+':
        c = a + b;
        printf("%d + %d = %.1lf", a, b, c);
        break;

    case '-':
        c = a - b;
        printf("%d - %d = %.1lf", a, b, c);
        break;
    case '*':
        c = a * b;
        printf("%d * %d = %.1lf", a, b, c);
        break;
    case '/':
        c = a / b;
        printf("%.d / %d = %.2f", a, b, c);
        break;
    case '%':
        c = a % b;
        printf("%d %% %d = %.2lf", a, b, c);
        break;

    default:
        printf("Invalid!!! Wrong operator !!!");
    }

    return 0;
}