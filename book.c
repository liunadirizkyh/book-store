#include <stdio.h>
#include <ctype.h>
#include <windows.h>

int main()
{
    char next;

    do
    {
        system("cls");

        printf("===============\n");
        printf("BULK BOOK STORE\n");
        printf("===============\n");
        printf("Book List :\n");
        printf("A: 30.000\n");
        printf("B: 20.000\n");
        printf("C: 50.000\n");
        printf("===============\n");

        char type;
        printf("Type of book : ");
        scanf("%c", &type);
        getchar();

        int total;
        printf("Total book : ");
        scanf("%d", &total);
        getchar();

        type = toupper(type);

        int price;
        switch (type)
        {
        case 'A':
            price = 30000 * total;
            break;
        case 'B':
            price = 20000 * total;
            break;
        case 'C':
            price = 50000 * total;
            break;
        default:
            printf("Wrong Input !!!\n");
            return 0;
        }

        char member;
        printf("Are you a member? (Y/n) : ");
        scanf("%c", &member);
        getchar();

        member = toupper(member);

        int discount = 0;
        if (member == 'Y')
        {
            if (price >= 100000)
            {
                discount = price * 0.05;
                printf("Discount member : %d\n", discount);
            }
            else
            {
                printf("The price is below 100.000 so you dont get a discount member\n");
            }
        }
        else if (member == 'N')
        {
            discount = 0;
        }
        else
        {
            printf("Wrong Input !!!");
            return 0;
        }
        printf("Price : %d", price - discount);

        int payment;
        printf("\nPayment : ");
        scanf("%d", &payment);
        getchar();

        int change = payment - (price - discount);
        printf("Change : %d\n", change);

        printf("Next Customer? (Y/n) : ");
        scanf("%c", &next);
        getchar();

        next = toupper(next);

    } while (next != 'N');

    return 0;
}