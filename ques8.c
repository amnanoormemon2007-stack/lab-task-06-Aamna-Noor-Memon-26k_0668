
    #include <stdio.h>

int main()
{
    int arr[15] = {1, 0, 1, 0, 0, 1, 1, 0, 1, 0, 0, 1, 1, 0, 1};

    int booked = 0;
    int empty = 0;
    int lastSeat = 0;
    int count = 0;

    // Count booked and empty seats
    for (int i = 0; i < 15; i++)
    {
        if (arr[i] == 0)
        {
            empty++;
        }
        else
        {
            booked++;
        }
    }

    printf("Total Booked Seats: %d\n", booked);
    printf("Total Empty Seats: %d\n", empty);

    // Find first available seat
    for (int i = 0; i < 15; i++)
    {
        if (arr[i] == 0)
        {
            printf("First Available Seat No: %d\n", i);
            break;
        }
    }

    // Find last available seat
    for (int i = 0; i < 15; i++)
    {
        if (arr[i] == 0)
        {
            lastSeat = i;
        }
    }

    printf("Last Available Seat No: %d\n", lastSeat);

    // Book first 3 available seats
    for (int i = 0; i < 15; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = 1;
            count++;

            if (count == 3)
            {
                break;
            }
        }
    }

    // Final seating chart
    printf("Final Seating Chart:\n");

    for (int i = 0; i < 15; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
