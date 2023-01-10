#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

enum type
{
    IN = 1,
    ON,
    F
};

int main()
{
    int n_calls;
    double in_calls = 0, on_calls = 0, f_calls = 0, sum_mins = 0;
    bool ok;

    printf("Phone bill calculator\n");

    do
    {
        ok = true;
        printf("How many calls did you make?\n>");
        if (scanf(" %d", &n_calls) != 1)
        {
            printf("Wrong input!");
            while (getchar() != '\n');
            ok = false;
        }
    } while (!ok || n_calls <= 0 || n_calls > 10);

    printf("Number of calls made: %d\n", n_calls);

    for (int i = 0; i < n_calls; i++)
    {
        enum type call_type;
        double minutes;

        // Call type input
        do
        {
            ok = true;
            printf("Type of call [1-foreign; 2-inner network; 3-out of network]\n");
            if (scanf(" %u", &call_type) != 1 || (call_type < 1 || call_type > 3))
            {
                printf("Bad input!\n");
                while (getchar() != '\n');
                ok = false;
            }
        } while (!ok);

        // Minutes input
        do
        {
            ok = 1;
            printf("How many minutes did it take?\n");
            if (scanf(" %lf", &minutes) != 1 || minutes < 0)
            {
                printf("Bad input!\n");
                while (getchar() != '\n');
                ok = 0;
            }
        } while (!ok);

        sum_mins += minutes;
        switch (call_type)
        {
        // foreign
        case F:
            f_calls += minutes * 100.0;
            break;
        // inner-network
        case IN:
            in_calls += minutes * 40.0;
            break;
        // out of network
        case ON:
            on_calls += minutes * 60.0;
            break;
        }
    }

    printf("Your calls:\n");
    printf("minutes\t\t%10.2lf\n", sum_mins);
    printf("foreign\t\t%10.2lf$\n", f_calls);
    printf("inter network\t%10.2lf$\n", in_calls);
    printf("out of network\t%10.2lf$\n", on_calls);

    return 0;
}