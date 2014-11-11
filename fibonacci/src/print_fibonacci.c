#include <stdio.h>
#include <R.h>
#include <Rinternals.h>

SEXP print_fibonacci(SEXP num)
{
    int n = INTEGER(num)[0];
    int prev = 0;
    int curr = 1;
    for (int i = 0; i < n; ++i)
    {
        int tmp = curr + prev;
        prev = curr;
        curr = tmp;
    }
    if (n < 0) 
    {
        Rprintf("invalid input\n");
    }
    else 
    {
        Rprintf("%d\n", curr);
    }
    return R_NilValue;
}
