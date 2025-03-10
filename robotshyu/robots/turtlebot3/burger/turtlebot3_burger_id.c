/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) turtlebot3_burger_id_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int long long int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

static const casadi_int casadi_s0[7] = {3, 1, 0, 3, 0, 1, 2};

/* rnea:(q[3],dq[3],ddq[3])->(tau[3]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a3, a4, a5, a6, a7, a8, a9;
  a0=9.9999999999999995e-07;
  a1=arg[2]? arg[2][0] : 0;
  a2=(a0*a1);
  a3=(a0*a1);
  a4=arg[0]? arg[0][2] : 0;
  a5=cos(a4);
  a6=1.0017349200000001e+00;
  a7=arg[1]? arg[1][2] : 0;
  a8=arg[1]? arg[1][1] : 0;
  a9=(a5*a8);
  a4=sin(a4);
  a10=arg[1]? arg[1][0] : 0;
  a11=(a4*a10);
  a9=(a9-a11);
  a11=(a7*a9);
  a12=(a5*a1);
  a13=arg[2]? arg[2][1] : 0;
  a14=(a4*a13);
  a12=(a12+a14);
  a11=(a11+a12);
  a12=-4.3368086899420177e-19;
  a14=arg[2]? arg[2][2] : 0;
  a15=(a12*a14);
  a11=(a11-a15);
  a11=(a6*a11);
  a15=-4.0460124920073653e-03;
  a16=(a15*a7);
  a16=(a9+a16);
  a16=(a6*a16);
  a17=(a7*a16);
  a17=(a11-a17);
  a18=(a5*a17);
  a19=(a5*a13);
  a1=(a4*a1);
  a19=(a19-a1);
  a10=(a5*a10);
  a8=(a4*a8);
  a10=(a10+a8);
  a8=(a7*a10);
  a19=(a19-a8);
  a8=(a15*a14);
  a19=(a19+a8);
  a19=(a6*a19);
  a8=(a12*a7);
  a8=(a10-a8);
  a6=(a6*a8);
  a7=(a7*a6);
  a7=(a19+a7);
  a8=(a4*a7);
  a18=(a18-a8);
  a3=(a3+a18);
  a2=(a2+a3);
  if (res[0]!=0) res[0][0]=a2;
  a0=(a0*a13);
  a4=(a4*a17);
  a5=(a5*a7);
  a4=(a4+a5);
  a0=(a0+a4);
  if (res[0]!=0) res[0][1]=a0;
  a0=4.5287417760175004e-03;
  a0=(a0*a14);
  a15=(a15*a19);
  a12=(a12*a11);
  a15=(a15-a12);
  a0=(a0+a15);
  a10=(a10*a16);
  a9=(a9*a6);
  a10=(a10-a9);
  a0=(a0+a10);
  if (res[0]!=0) res[0][2]=a0;
  return 0;
}

CASADI_SYMBOL_EXPORT int rnea(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int rnea_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int rnea_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void rnea_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int rnea_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void rnea_release(int mem) {
}

CASADI_SYMBOL_EXPORT void rnea_incref(void) {
}

CASADI_SYMBOL_EXPORT void rnea_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int rnea_n_in(void) { return 3;}

CASADI_SYMBOL_EXPORT casadi_int rnea_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real rnea_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* rnea_name_in(casadi_int i){
  switch (i) {
    case 0: return "q";
    case 1: return "dq";
    case 2: return "ddq";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* rnea_name_out(casadi_int i){
  switch (i) {
    case 0: return "tau";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* rnea_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    case 2: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* rnea_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int rnea_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 3;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
