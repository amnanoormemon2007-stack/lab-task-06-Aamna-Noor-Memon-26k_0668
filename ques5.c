
  #include <stdio.h>

int main()
{
    int notes500[5] = {2, 3, 1, 4, 2};
    int notes200[5] = {1, 2, 3, 1, 2};
    int notes100[5] = {3, 1, 2, 4, 1};

    int total = 0;

    for(int i = 0; i < 5; i++)
    {
        total = total + notes500[i] * 500;
        total = total + notes200[i] * 200;
        total = total + notes100[i] * 100;
    }

    int withdraw;

    printf("Total Cash = %d\n", total);

    printf("Enter withdrawal amount: ");
    scanf("%d", &withdraw);

    if(withdraw > total)
    {
        printf("Insufficient Cash");
    }
    else if(withdraw % 100 != 0)
    {
        printf("Invalid Amount");
    }
    else
    {
        printf("Withdrawal Approved");
    }

    return 0;
}

