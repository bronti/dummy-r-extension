getFibonacci <- function(n){
    res <- .Call(get_fibonacci, as.integer(n))
    return(res)
}
