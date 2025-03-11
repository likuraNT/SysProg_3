#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a = NULL;
    size_t a_size = 0;
    printf("Enter an array size: ");
    scanf("%lu", &a_size);

    int sum = 0, amount = 0;

    a = malloc(sizeof(int) * a_size);
    for (unsigned i = 0; i < a_size; ++i)
    {
        scanf("%i", &a[i]);
        if (a[i] < 0)
        {
            printf("Index is %i \n", i);
            sum+=a[i];
            ++amount;
        }
    }

    printf("\nAverage: %i\n", amount == 0 ? 0 : sum / amount);
    free(a);
    return 0;
}
