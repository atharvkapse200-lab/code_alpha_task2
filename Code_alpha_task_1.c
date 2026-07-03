#include <stdio.h>

int main()
{
    int choice;
    float num1, num2, result;

    do
    {
        printf("\nBasic Calculator\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter first number: ");
                scanf("%f", &num1);

                printf("Enter second number: ");
                scanf("%f", &num2);

                result = num1 + num2;
                printf("Answer = %.2f\n", result);
                break;

            case 2:
                printf("Enter first number: ");
                scanf("%f", &num1);

                printf("Enter second number: ");
                scanf("%f", &num2);

                result = num1 - num2;
                printf("Answer = %.2f\n", result);
                break;

            case 3:
                printf("Enter first number: ");
                scanf("%f", &num1);

                printf("Enter second number: ");
                scanf("%f", &num2);

                result = num1 * num2;
                printf("Answer = %.2f\n", result);
                break;

            case 4:
                printf("Enter first number: ");
                scanf("%f", &num1);

                printf("Enter second number: ");
                scanf("%f", &num2);

                if(num2 != 0)
                {
                    result = num1 / num2;
                    printf("Answer = %.2f\n", result);
                }
                else
                {
                    printf("Division by zero is not possible.\n");
                }
                break;

            case 5:
                printf("Program Ended.\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 5);

    return 0;
}