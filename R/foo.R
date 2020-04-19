## usethis namespace: start
#' @useDynLib ractionstest, .registration = TRUE
## usethis namespace: end
NULL

#' Document a function
#' @param x the x parameter
#' @examples
#' 1 + 1 == foo(1)
#' @export
foo = function(x) x + 1

#' @export
foo2 <- function(x) .Call(sum_, x)
