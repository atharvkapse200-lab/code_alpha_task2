#include <stdio.h>

void input(int a[10][10], int r, int c)
{
    int i, j;

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void display(int a[10][10], int r, int c)
{
    int i, j;

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void addition(int a[10][10], int b[10][10], int r, int c)
{
    int i, j, sum[10][10];

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Addition of Matrix:\n");
    display(sum, r, c);
}

void multiplication(int a[10][10], int b[10][10], int r1, int c1, int c2)
{
    int i, j, k, mul[10][10];

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            mul[i][j] = 0;

            for(k = 0; k < c1; k++)
            {
                mul[i][j] = mul[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    printf("Multiplication of Matrix:\n");
    display(mul, r1, c2);
}

void transpose(int a[10][10], int r, int c)
{
    int i, j;

    printf("Transpose Matrix:\n");

    for(i = 0; i < c; i++)
    {
        for(j = 0; j < r; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}

int main()
{
    int a[10][10], b[10][10];
    int r1, c1, r2, c2;
    int choice;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d%d", &r1, &c1);

    printf("Enter first matrix:\n");
    input(a, r1, c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d%d", &r2, &c2);

    printf("Enter second matrix:\n");
    input(b, r2, c2);

    do
    {
        printf("\n1. Addition\n");
        printf("2. Multiplication\n");
        printf("3. Transpose First Matrix\n");
        printf("4. Transpose Second Matrix\n");
        printf("5. Display Matrices\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(r1 == r2 && c1 == c2)
                    addition(a, b, r1, c1);
                else
                    printf("Addition not possible.\n");
                break;

            case 2:
                if(c1 == r2)
                    multiplication(a, b, r1, c1, c2);
                else
                    printf("Multiplication not possible.\n");
                break;

            case 3:
                transpose(a, r1, c1);
                break;

            case 4:
                transpose(b, r2, c2);
                break;

            case 5:
                printf("First Matrix:\n");
                display(a, r1, c1);

                printf("Second Matrix:\n");
                display(b, r2, c2);
                break;

            case 6:
                printf("Program Ended.\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 6);

    return 0;
}