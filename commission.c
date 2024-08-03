#include <stdio.h>

int main()
{
    int locks, stocks, barrels, tlocks, tstocks, tbarrels;
    float lprice, sprice, bprice, sales, comm;
    int c1, c2, c3, temp;

    lprice = 45.0;
    sprice = 30.0;
    bprice = 25.0;
    tlocks = 0;
    tstocks = 0;
    tbarrels = 0;

    printf("\nEnter the number of locks and to exit the loop enter -1 for locks: ");
    scanf("%d", &locks);

    while (locks != -1)
    {
        c1 = (locks <= 0 || locks > 70);

        printf("Enter the number of stocks and barrels: ");
        scanf("%d %d", &stocks, &barrels);

        c2 = (stocks <= 0 || stocks > 80);
        c3 = (barrels <= 0 || barrels > 90);

        if (c1)
        {
            printf("Value of locks not in the range 1..70\n");
        }
        else
        {
            temp = tlocks + locks;
            if (temp > 70)
            {
                printf("New total locks = %d not in the range 1..70 so old\n", temp);
            }
            else
            {
                tlocks = temp;
            }
        }
        printf("Total locks = %d\n", tlocks);

        if (c2)
        {
            printf("Value of stocks not in the range 1..80\n");
        }
        else
        {
            temp = tstocks + stocks;
            if (temp > 80)
            {
                printf("New total stocks = %d not in the range 1..80 so old\n", temp);
            }
            else
            {
                tstocks = temp;
            }
        }
        printf("Total stocks = %d\n", tstocks);

        if (c3)
        {
            printf("Value of barrels not in the range 1..90\n");
        }
        else
        {
            temp = tbarrels + barrels;
            if (temp > 90)
            {
                printf("New total barrels = %d not in the range 1..90 so old\n", temp);
            }
            else
            {
                tbarrels = temp;
            }
        }
        printf("Total barrels = %d\n", tbarrels);

        printf("\nEnter the number of locks and to exit the loop enter -1 for locks: ");
        scanf("%d", &locks);
    }

    printf("\nTotal locks = %d\nTotal stocks = %d\nTotal barrels = %d\n", tlocks, tstocks, tbarrels);

    sales = lprice * tlocks + sprice * tstocks + bprice * tbarrels;
    printf("\nThe total sales = %f\n", sales);

    if (tlocks > 0 && tstocks > 0 && tbarrels > 0)
    {
        if (sales > 1800.0)
        {
            comm = 0.10 * 1000.0;
            comm = comm + 0.15 * 800;
            comm = comm + 0.20 * (sales - 1800.0);
        }
        else if (sales > 1000)
        {
            comm = 0.10 * 1000;
            comm = comm + 0.15 * (sales - 1000);
        }
        else
        {
            comm = 0.10 * sales;
        }
        printf("The commission is = %f\n", comm);
    }
    else
    {
        printf("Commission cannot be calculated\n");
    }

    return 0;
}
