#include <stdio.h>

int multiplay()
{
    int a, b;

    printf("\nEnter a num_1 = ");
    scanf("%d", &a);

    printf("Enter a Num_2 = ");
    scanf("%d", &b);

    return a * b;
}

int Addition()
{
    int a, b;

    printf("\nEnter a num_1 = ");
    scanf("%d", &a);

    printf("Enter a Num_2 = ");
    scanf("%d", &b);

    return a + b;
}

int Subtraction()
{
    int a, b;

    printf("\nEnter a num_1 = ");
    scanf("%d", &a);

    printf("Enter a Num_2 = ");
    scanf("%d", &b);

    return a - b;
}

int Divide()
{
    int a, b;

    printf("\nEnter a num_1 = ");
    scanf("%d", &a);

    printf("Enter a Num_2 = ");
    scanf("%d", &b);

    return a / b;
}

int Remander()
{
    int a, b;

    printf("\nEnter a num_1 = ");
    scanf("%d", &a);

    printf("Enter a Num_2 = ");
    scanf("%d", &b);

    return a % b;
}

int Square()
{
    int a;

    printf("\nEnter a number = ");
    scanf("%d", &a);

    return a * a;
}

int Cube()
{
    int a;

    printf("\nEnter a number = ");
    scanf("%d", &a);

    return a * a * a;
}

void Even_Odd()
{
    int a;

    printf("\nEnter a number = ");
    scanf("%d", &a);

    if(a % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}

int main()
{
    int choice;

    printf("========== MENU ==========\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Remainder\n");
    printf("6. Square\n");
    printf("7. Cube\n");
    printf("8. Even / Odd\n");

    printf("\nEnter your choice = ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Addition = %d", Addition());
            break;

        case 2:
            printf("Subtraction = %d", Subtraction());
            break;

        case 3:
            printf("Multiplication = %d", multiplay());
            break;

        case 4:
            printf("Division = %d", Divide());
            break;

        case 5:
            printf("Remainder = %d", Remander());
            break;

        case 6:
            printf("Square = %d", Square());
            break;

        case 7:
            printf("Cube = %d", Cube());
            break;

        case 8:
            Even_Odd();
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}