printFibonacci <- function(n){
    res <- .Call(print_fibonacci, as.integer(n))
    return(res)
}
