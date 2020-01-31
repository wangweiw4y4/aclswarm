//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: CXSparseAPI.h
//
// MATLAB Coder version            : 4.1
// C/C++ source code generated on  : 28-Jan-2020 15:30:30
//
#ifndef CXSPARSEAPI_H
#define CXSPARSEAPI_H

// Include Files
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "ADMMGainDesign3D_types.h"

// Function Declarations
extern void CXSparseAPI_iteratedQR(const emxArray_real_T *A_d, const
  emxArray_int32_T *A_colidx, const emxArray_int32_T *A_rowidx, int A_m, int A_n,
  const emxArray_real_T *b_d, const emxArray_int32_T *b_colidx, const
  emxArray_int32_T *b_rowidx, int b_m, int n, coder_internal_sparse_1 *out);

#endif

//
// File trailer for CXSparseAPI.h
//
// [EOF]
//