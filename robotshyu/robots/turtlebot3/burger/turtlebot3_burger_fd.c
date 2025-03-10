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
  #define CASADI_PREFIX(ID) turtlebot3_burger_fd_ ## ID
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

/* aba:(q[3],dq[3],tau[3])->(ddq[3]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a2, a3, a4, a5, a6, a7, a8, a9;
  a0=arg[2]? arg[2][0] : 0;
  a1=arg[0]? arg[0][2] : 0;
  a2=cos(a1);
  a3=1.0017349200000001e+00;
  a4=arg[1]? arg[1][2] : 0;
  a5=arg[1]? arg[1][1] : 0;
  a6=(a2*a5);
  a1=sin(a1);
  a7=arg[1]? arg[1][0] : 0;
  a8=(a1*a7);
  a6=(a6-a8);
  a8=(a4*a6);
  a9=(a3*a8);
  a10=3.8739660273519642e-19;
  a7=(a2*a7);
  a5=(a1*a5);
  a7=(a7+a5);
  a5=(a4*a7);
  a11=(a10*a5);
  a9=(a9-a11);
  a11=9.5581925515317054e-17;
  a12=arg[2]? arg[2][2] : 0;
  a13=-4.0460124920073653e-03;
  a13=(a13*a4);
  a13=(a3*a13);
  a14=(a7*a13);
  a15=-4.3368086899420177e-19;
  a15=(a15*a4);
  a15=(a3*a15);
  a16=(a6*a15);
  a14=(a14+a16);
  a12=(a12-a14);
  a14=(a11*a12);
  a9=(a9+a14);
  a6=(a3*a6);
  a6=(a6+a13);
  a6=(a4*a6);
  a9=(a9-a6);
  a6=(a2*a9);
  a7=(a3*a7);
  a7=(a7-a15);
  a4=(a4*a7);
  a7=(a10*a8);
  a15=9.9812071516393486e-01;
  a13=(a15*a5);
  a7=(a7-a13);
  a13=-8.9172867030540093e-01;
  a14=(a13*a12);
  a7=(a7+a14);
  a4=(a4+a7);
  a7=(a1*a4);
  a6=(a6-a7);
  a7=(a3*a2);
  a14=(a10*a1);
  a7=(a7-a14);
  a14=(a7*a1);
  a16=(a10*a2);
  a17=(a15*a1);
  a16=(a16-a17);
  a17=(a16*a2);
  a14=(a14+a17);
  a17=9.9999999999999995e-07;
  a3=(a3*a1);
  a18=(a10*a2);
  a3=(a3+a18);
  a3=(a3*a1);
  a10=(a10*a1);
  a15=(a15*a2);
  a10=(a10+a15);
  a10=(a10*a2);
  a3=(a3+a10);
  a3=(a17+a3);
  a10=(a14/a3);
  a15=arg[2]? arg[2][1] : 0;
  a9=(a1*a9);
  a4=(a2*a4);
  a9=(a9+a4);
  a15=(a15-a9);
  a9=(a10*a15);
  a6=(a6+a9);
  a0=(a0-a6);
  a7=(a7*a2);
  a16=(a16*a1);
  a7=(a7-a16);
  a7=(a17+a7);
  a14=(a10*a14);
  a7=(a7-a14);
  a17=(a17+a7);
  a0=(a0/a17);
  if (res[0]!=0) res[0][0]=a0;
  a15=(a15/a3);
  a10=(a10*a0);
  a15=(a15-a10);
  if (res[0]!=0) res[0][1]=a15;
  a10=2.2001520597552675e+02;
  a10=(a10*a12);
  a12=(a2*a0);
  a3=(a1*a15);
  a12=(a12+a3);
  a8=(a8+a12);
  a11=(a11*a8);
  a2=(a2*a15);
  a1=(a1*a0);
  a2=(a2-a1);
  a2=(a2-a5);
  a13=(a13*a2);
  a11=(a11+a13);
  a10=(a10-a11);
  if (res[0]!=0) res[0][2]=a10;
  return 0;
}

CASADI_SYMBOL_EXPORT int aba(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int aba_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int aba_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void aba_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int aba_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void aba_release(int mem) {
}

CASADI_SYMBOL_EXPORT void aba_incref(void) {
}

CASADI_SYMBOL_EXPORT void aba_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int aba_n_in(void) { return 3;}

CASADI_SYMBOL_EXPORT casadi_int aba_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real aba_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* aba_name_in(casadi_int i){
  switch (i) {
    case 0: return "q";
    case 1: return "dq";
    case 2: return "tau";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* aba_name_out(casadi_int i){
  switch (i) {
    case 0: return "ddq";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* aba_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    case 2: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* aba_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int aba_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 3;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
