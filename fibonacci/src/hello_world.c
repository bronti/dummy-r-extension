#include <stdio.h>
#include <R.h>
#include <Rinternals.h>

SEXP hello_world() {
    Rprintf("Hi, honey!\n");
    return R_NilValue;
}
