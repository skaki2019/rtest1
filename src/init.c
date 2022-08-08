#include <R.h>
#include <Rinternals.h>
#include <R_ext/Rdynload.h>
extern SEXP norm2(SEXP x);
extern SEXP nullp(SEXP x);
extern SEXP igamma(SEXP a_, SEXP x_);
extern SEXP igammac(SEXP a_, SEXP x_);
// extern SEXP matrixmul(SEXP a, SEXP b);
// extern SEXP mylist3(SEXP a, SEXP b, SEXP c);
// extern SEXP mybooltest();

static const R_CallMethodDef callMethods[]  = {
  {"norm2_", (DL_FUNC) &norm2, 1},
  {"nullp_", (DL_FUNC) &nullp, 1},
  {"igamma_", (DL_FUNC) &igamma, 2},
  {"igammac_", (DL_FUNC) &igammac, 2},
  // {"matrixmul_", (DL_FUNC) &matrixmul, 2},
  // {"mylist3_", (DL_FUNC) &mylist3, 3},
  // {"mybooltest_", (DL_FUNC) &mybooltest, 0},
  {NULL, NULL, 0}
};

void R_init_rtest1(DllInfo *info)
{
  /* Register routines, allocate resources. */
  R_registerRoutines(info, NULL, callMethods, NULL, NULL);
  R_useDynamicSymbols(info, TRUE);
}
