#include <stdio.h>
#include <stdlib.h>

int main()
{
    double *c_ptr = malloc(sizeof(double)), *d_ptr = malloc(sizeof(double)), *e_ptr = malloc(sizeof(double));
    printf("Enter 3 dif. nums\n");
    scanf("%lf %lf %lf", c_ptr, d_ptr, e_ptr);
    printf("a = %lf, b = %lf, c = %lf\n", *c_ptr, *d_ptr, *e_ptr);

    *e_ptr = *c_ptr;
    *c_ptr = *d_ptr;
    *d_ptr = *e_ptr;
  
    
    printf("a = %lf, b = %lf, c = %lf\n", *c_ptr, *d_ptr, *e_ptr);
    
    free(c_ptr);
    free(d_ptr);
    free(e_ptr);
    return 0;
}
