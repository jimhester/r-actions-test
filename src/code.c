#define R_NO_REMAP
#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

SEXP sum_(SEXP x_sxp) {
  double* x = REAL(x_sxp);
  R_xlen_t n = Rf_xlength(x_sxp);
  double sum = 0;
  for (R_xlen_t i = 0; i < n; ++i) {
    sum += x[i];
  }
  return Rf_ScalarReal(sum);
}

static const R_CallMethodDef CallEntries[] = {
    {"sum_", (DL_FUNC) &sum_, 1},
    {NULL, NULL, 0}
};

void R_init_ractionstest(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
