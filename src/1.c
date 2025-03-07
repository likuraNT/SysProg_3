#include <stdio.h>

int main()
{
    int a = 0, b = 0,*a_ptr = &a, *b_ptr = &b;
    printf("Enter two nums, using space. Ex: 12 5\n");
    scanf("%d %d", &a, &b);
    printf("a = %d, b = %d\n", a, b);
    *a_ptr *= 2;
    *b_ptr /= 2;
    printf("a = %d, b = %d\n", a, b);
}
