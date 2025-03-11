#include <math.h>
#include <stdio.h>
#include <stdlib.h>

static int qsort_less_then(const void* a, const void* b)
{
    return (*(float *)a - *(float *)b);
}

int main()
{
    int *a = NULL;
    double *a_sqrt = NULL;
    size_t a_size = 0;
    printf("Enter an array size:\n");
    scanf("%lu", &a_size);


    a = malloc(sizeof(int) * a_size);
    a_sqrt = malloc(sizeof(int)* a_size);

    size_t sqrt_size = 0;
    for (size_t i = 0; i < a_size; ++i)
    {
        scanf("%i", &a[i]);
    }


    for (size_t i = 0; i < a_size; ++i)
    {
        if (a[i] > 0)
        {
            a_sqrt[sqrt_size]=sqrtf(a[i])/5;
            ++sqrt_size;
        }
    }
    if (sqrt_size != a_size)
    {
        a_sqrt = realloc(a_sqrt, sqrt_size);
    }

    qsort(a_sqrt, sqrt_size, sizeof(float), &qsort_less_then);

    for (unsigned i = 0; i < sqrt_size; ++i)
    {
        printf("%f ", a_sqrt[i]);
    }
    putchar(0x0a); //analogue \n


    free(a);
    free(a_sqrt);

    return 0;
}
