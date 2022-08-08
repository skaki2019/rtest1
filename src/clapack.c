#include <R.h>
#include <Rinternals.h>
#include <R_ext/BLAS.h>


SEXP norm2(SEXP x)
{
    double z;
    int nx = length(x);
    double *xp = REAL(x);
    int incx = 1;
    
    SEXP ans = PROTECT(allocVector(REALSXP, 1));
    z = F77_NAME(dnrm2)(&nx, xp, &incx);
    // z = cblas_dnrm2(nx, xp, 1);
    REAL(ans)[0] = z;
    UNPROTECT(1);
    return ans;
}

SEXP nullp(SEXP x)
{
    if (isNull(x))
    {
        return ScalarLogical(1);
    }
    else
    {
        return ScalarLogical(0);
    }
}

double F77_NAME(dgami)(double *, double *);
SEXP igamma(SEXP a_, SEXP x_)
{
    int cnt = 0;
    double a, x, z;
    SEXP ans;

    ans = PROTECT(allocVector(REALSXP, 1));
    cnt++;
    a_ = PROTECT(coerceVector(a_, REALSXP));
    cnt++;
    x_ = PROTECT(coerceVector(x_, REALSXP));
    cnt++;

    a = REAL(a_)[0];
    x = REAL(x_)[0];

    // Rprintf("%f, %f\n", a, x);
    z = F77_NAME(dgami)(&a, &x);
    // Rprintf("%f\n", z);
    REAL(ans)[0] = z;
    UNPROTECT(cnt);

    return ans;
}

double F77_NAME(dgamic)(double *, double *);
SEXP igammac(SEXP a_, SEXP x_)
{
    int cnt = 0;
    double a, x, z;
    SEXP ans;

    ans = PROTECT(allocVector(REALSXP, 1));
    cnt++;
    a_ = PROTECT(coerceVector(a_, REALSXP));
    cnt++;
    x_ = PROTECT(coerceVector(x_, REALSXP));
    cnt++;

    a = REAL(a_)[0];
    x = REAL(x_)[0];

    // Rprintf("%f, %f\n", a, x);
    z = F77_NAME(dgamic)(&a, &x);
    // Rprintf("%f\n", z);
    REAL(ans)[0] = z;
    UNPROTECT(cnt);

    return ans;
}