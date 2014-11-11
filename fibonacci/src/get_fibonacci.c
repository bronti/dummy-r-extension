#include <stdio.h>
#include <R.h>
#include <Rinternals.h>

SEXP get_fibonacci(SEXP num)
{
    int n = INTEGER(num)[0];
    if (n < 0) 
    {
        return R_NilValue;
    }
    SEXP curr = R_NilValue;
    PROTECT(curr = Rf_allocVector(INTSXP,1));
    INTEGER(curr)[0] = 1;

    int prev = 0;
    for (int i = 0; i < n; ++i)
    {
        int tmp = INTEGER(curr)[0] + prev;
        prev = INTEGER(curr)[0];
        INTEGER(curr)[0] = tmp;
    }

    UNPROTECT(1);
    return curr;
}
