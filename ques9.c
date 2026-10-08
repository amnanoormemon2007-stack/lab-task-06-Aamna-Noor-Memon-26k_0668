#include <stdio.h>

int main()
{
    int tooSmall = 0;
    int tooLarge = 0;
    int normalSum = 0;
    int normal = 0;
    int largest = 0;

    int transfers[10] = {
        5000, 50, 12000, 500000, 20,
        8000, 25000, 300, 450000, 15000
    };

    // Count too small and too large transfers
    for (int i = 0; i < 10; i++)
    {
        if (transfers[i] < 100)
        {
            tooSmall++;
        }
        else if (transfers[i] > 200000)
        {
            tooLarge++;
        }
    }

    printf("Below 100 Transfers: %d\n", tooSmall);
    printf("Above 200000 Transfers: %d\n", tooLarge);
    printf("Total Flagged Transfers: %d\n",
           tooSmall + tooLarge);

    // Calculate average of normal transfers
    for (int i = 0; i < 10; i++)
    {
        if (!(transfers[i] < 100 ||
              transfers[i] > 200000))
        {
            normalSum = normalSum + transfers[i];
            normal++;
        }
    }

    printf("Average of Normal Transfers: %d\n",
           normalSum / normal);

    // Find largest transfer
    for (int i = 0; i < 10; i++)
    {
        if (transfers[i] >= largest)
        {
            largest = transfers[i];
        }
    }

    printf("Largest Transfer: %d\n", largest);

    return 0;
}