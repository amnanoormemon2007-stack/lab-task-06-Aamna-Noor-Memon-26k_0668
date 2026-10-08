#include <stdio.h>

int main()
{
    int amount;
    int transactions = 0;
    int total = 0;

    while (1)
    {
        printf("Enter withdrawal amount (0 to exit): ");
        scanf("%d", &amount);

        if (amount == 0)
        {
            break;
        }

        transactions++;
        total = total + amount;
    }

    printf("Total Transactions: %d\n", transactions);
    printf("Total Amount Withdrawn: %d\n", total);

    return 0;
}