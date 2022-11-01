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
#' 
#' @description Evaluate an incomplete gamma function:
#' \deqn{\gamma(a, x) = \int_{0}^{x} t^{a-1}\exp{-t}dt,}
#' using SLATEC `dgami` in \url{https://netlib.org/slatec/}.
#' When \eqn{a \gt 0} and \eqn{x \ge 0}, compute the result, otherwise the value
#' is `NaN`.
#' @param a A numeric vector.
#' @param x A numeric vector
#' @return `dgami(a, x)`
#' @export
igamma <- function(a, x) .Call("igamma_", a, x)

#' Compute complementary incomplete gamma
#' 
#' @description Evaluate an complementary incomplete gamma function:
#' \deqn{\gamma^{*}(a, x) = \int_{x}^{\inf} t^{a-1}\exp{-t}dt,}
#' using SLATEC `dgamic` in \url{https://netlib.org/slatec/}.
#' When \eqn{x > 0} or \eqn{x \eq 0 & a \ge 0}, compute the result,
#' otherwise the value is `NaN`.
#' @param a A numeric vector.
#' @param x A numeric vector
#' @return `dgamic(a, x)`
#' @export
igammac <- function(a, x) .Call("igammac_", a, x)