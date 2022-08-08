#' Compute 2 norm
#' @param x A vector.
#' @return 2 norm
#' @export
norm2a <- function(x) .Call("norm2_", x)

#' Check obj is null
#' @param x object
#' @return None
#' @export
nullp1 <- function(x) .Call("nullp_", x)

#' Compute incomplete gamma
#' @param a A numeric vector.
#' @param x A numeric vector
#' @return `dgami(a, x)`
#' @export
igamma <- function(a, x) .Call("igamma_", a, x)

#' Compute complementary incomplete gamma
#' @param a A numeric vector.
#' @param x A numeric vector
#' @return `dgamic(a, x)`
#' @export
igammac <- function(a, x) .Call("igammac_", a, x)