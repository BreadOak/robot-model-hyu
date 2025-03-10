/* This file was automatically generated by CasADi 3.6.3+.
 *  It consists of: 
 *   1) content generated by CasADi runtime: not copyrighted
 *   2) template code copied from CasADi source: permissively licensed (MIT-0)
 *   3) user code: owned by the user
 *
 */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) kuka_kr_250_fk_ ## ID
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
#define casadi_s1 CASADI_PREFIX(s1)

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

static const casadi_int casadi_s0[10] = {6, 1, 0, 6, 0, 1, 2, 3, 4, 5};
static const casadi_int casadi_s1[23] = {4, 4, 0, 4, 8, 12, 16, 0, 1, 2, 3, 0, 1, 2, 3, 0, 1, 2, 3, 0, 1, 2, 3};

/* fk_T:(q[6])->(T_joint1[4x4],T_joint2[4x4],T_joint3[4x4],T_joint4[4x4],T_joint5[4x4],T_joint6[4x4],T_tcp_joint[4x4]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a3, a4, a5, a6, a7, a8, a9;
  a0=arg[0]? arg[0][0] : 0;
  a1=cos(a0);
  if (res[0]!=0) res[0][0]=a1;
  a0=sin(a0);
  a2=(-a0);
  if (res[0]!=0) res[0][1]=a2;
  a2=9.7931777202934950e-12;
  a3=(a2*a0);
  if (res[0]!=0) res[0][2]=a3;
  a4=0.;
  if (res[0]!=0) res[0][3]=a4;
  a5=(-a0);
  if (res[0]!=0) res[0][4]=a5;
  a5=(-a1);
  if (res[0]!=0) res[0][5]=a5;
  a2=(a2*a1);
  if (res[0]!=0) res[0][6]=a2;
  if (res[0]!=0) res[0][7]=a4;
  if (res[0]!=0) res[0][8]=a4;
  a5=-9.7931777202934950e-12;
  if (res[0]!=0) res[0][9]=a5;
  a6=-1.;
  if (res[0]!=0) res[0][10]=a6;
  if (res[0]!=0) res[0][11]=a4;
  if (res[0]!=0) res[0][12]=a4;
  if (res[0]!=0) res[0][13]=a4;
  a6=2.3560000000000000e-01;
  if (res[0]!=0) res[0][14]=a6;
  a7=1.;
  if (res[0]!=0) res[0][15]=a7;
  a8=arg[0]? arg[0][1] : 0;
  a9=cos(a8);
  a10=(a1*a9);
  a11=4.8966386501092529e-12;
  a8=sin(a8);
  a12=(a11*a8);
  a13=(a0*a12);
  a10=(a10-a13);
  if (res[1]!=0) res[1][0]=a10;
  a13=(a5*a8);
  a14=(a1*a12);
  a13=(a13-a14);
  a14=(a0*a9);
  a13=(a13-a14);
  if (res[1]!=0) res[1][1]=a13;
  a14=(a3*a9);
  a12=(a2*a12);
  a12=(a12-a8);
  a14=(a14+a12);
  if (res[1]!=0) res[1][2]=a14;
  if (res[1]!=0) res[1][3]=a4;
  a12=(a1*a8);
  a15=(a11*a9);
  a16=(a0*a15);
  a12=(a12+a16);
  a16=(-a12);
  if (res[1]!=0) res[1][4]=a16;
  a16=(a0*a8);
  a5=(a5*a9);
  a17=(a1*a15);
  a5=(a5-a17);
  a16=(a16+a5);
  if (res[1]!=0) res[1][5]=a16;
  a15=(a2*a15);
  a15=(a15-a9);
  a8=(a3*a8);
  a15=(a15-a8);
  if (res[1]!=0) res[1][6]=a15;
  if (res[1]!=0) res[1][7]=a4;
  if (res[1]!=0) res[1][8]=a0;
  a8=-4.7953652532577950e-23;
  a8=(a1+a8);
  if (res[1]!=0) res[1][9]=a8;
  a9=-4.8966386501092529e-12;
  a9=(a9-a2);
  if (res[1]!=0) res[1][10]=a9;
  if (res[1]!=0) res[1][11]=a4;
  a2=3.3000000000000002e-01;
  a1=(a2*a1);
  if (res[1]!=0) res[1][12]=a1;
  a5=4.0093269586881568e-12;
  a17=(a2*a0);
  a5=(a5-a17);
  if (res[1]!=0) res[1][13]=a5;
  a2=(a2*a3);
  a3=4.0939999999999999e-01;
  a2=(a2+a3);
  a6=(a6+a2);
  if (res[1]!=0) res[1][14]=a6;
  if (res[1]!=0) res[1][15]=a7;
  a2=arg[0]? arg[0][2] : 0;
  a3=cos(a2);
  a17=(a10*a3);
  a2=sin(a2);
  a18=(a12*a2);
  a17=(a17-a18);
  if (res[2]!=0) res[2][0]=a17;
  a18=(a13*a3);
  a19=(a16*a2);
  a18=(a18+a19);
  if (res[2]!=0) res[2][1]=a18;
  a19=(a14*a3);
  a20=(a15*a2);
  a19=(a19+a20);
  if (res[2]!=0) res[2][2]=a19;
  if (res[2]!=0) res[2][3]=a4;
  a20=(a10*a2);
  a12=(a12*a3);
  a20=(a20+a12);
  a12=(-a20);
  if (res[2]!=0) res[2][4]=a12;
  a16=(a16*a3);
  a12=(a13*a2);
  a16=(a16-a12);
  if (res[2]!=0) res[2][5]=a16;
  a15=(a15*a3);
  a2=(a14*a2);
  a15=(a15-a2);
  if (res[2]!=0) res[2][6]=a15;
  if (res[2]!=0) res[2][7]=a4;
  if (res[2]!=0) res[2][8]=a0;
  if (res[2]!=0) res[2][9]=a8;
  if (res[2]!=0) res[2][10]=a9;
  if (res[2]!=0) res[2][11]=a4;
  a2=1.1499999999999999e+00;
  a10=(a2*a10);
  a3=-9.5000000000000001e-02;
  a12=(a3*a0);
  a10=(a10+a12);
  a1=(a1+a10);
  if (res[2]!=0) res[2][12]=a1;
  a13=(a2*a13);
  a10=(a3*a8);
  a13=(a13+a10);
  a5=(a5+a13);
  if (res[2]!=0) res[2][13]=a5;
  a2=(a2*a14);
  a3=(a3*a9);
  a2=(a2+a3);
  a6=(a6+a2);
  if (res[2]!=0) res[2][14]=a6;
  if (res[2]!=0) res[2][15]=a7;
  a2=arg[0]? arg[0][3] : 0;
  a3=cos(a2);
  a14=(a11*a3);
  a13=(a17*a14);
  a10=(a0*a3);
  a2=sin(a2);
  a12=(a20*a2);
  a10=(a10-a12);
  a13=(a13+a10);
  if (res[3]!=0) res[3][0]=a13;
  a10=(a18*a14);
  a12=(a16*a2);
  a21=(a8*a3);
  a12=(a12+a21);
  a10=(a10+a12);
  if (res[3]!=0) res[3][1]=a10;
  a14=(a19*a14);
  a12=(a15*a2);
  a21=(a9*a3);
  a12=(a12+a21);
  a14=(a14+a12);
  if (res[3]!=0) res[3][2]=a14;
  if (res[3]!=0) res[3][3]=a4;
  a12=(a11*a2);
  a21=(a17*a12);
  a22=(a20*a3);
  a23=(a0*a2);
  a22=(a22+a23);
  a21=(a21+a22);
  a22=(-a21);
  if (res[3]!=0) res[3][4]=a22;
  a22=(a16*a3);
  a23=(a8*a2);
  a22=(a22-a23);
  a23=(a18*a12);
  a22=(a22-a23);
  if (res[3]!=0) res[3][5]=a22;
  a3=(a15*a3);
  a2=(a9*a2);
  a3=(a3-a2);
  a12=(a19*a12);
  a3=(a3-a12);
  if (res[3]!=0) res[3][6]=a3;
  if (res[3]!=0) res[3][7]=a4;
  a12=(a11*a0);
  a12=(a12-a17);
  if (res[3]!=0) res[3][8]=a12;
  a2=(a11*a8);
  a2=(a2-a18);
  if (res[3]!=0) res[3][9]=a2;
  a23=(a11*a9);
  a23=(a23-a19);
  if (res[3]!=0) res[3][10]=a23;
  if (res[3]!=0) res[3][11]=a4;
  a24=8.7849999999999995e-01;
  a17=(a24*a17);
  a25=9.5000000000000001e-02;
  a0=(a25*a0);
  a26=-1.1500000000000000e-01;
  a20=(a26*a20);
  a0=(a0-a20);
  a17=(a17+a0);
  a1=(a1+a17);
  if (res[3]!=0) res[3][12]=a1;
  a18=(a24*a18);
  a16=(a26*a16);
  a8=(a25*a8);
  a16=(a16+a8);
  a18=(a18+a16);
  a5=(a5+a18);
  if (res[3]!=0) res[3][13]=a5;
  a24=(a24*a19);
  a26=(a26*a15);
  a25=(a25*a9);
  a26=(a26+a25);
  a24=(a24+a26);
  a6=(a6+a24);
  if (res[3]!=0) res[3][14]=a6;
  if (res[3]!=0) res[3][15]=a7;
  a24=arg[0]? arg[0][4] : 0;
  a26=cos(a24);
  a25=(a11*a26);
  a9=(a13*a25);
  a24=sin(a24);
  a15=(a21*a24);
  a19=(a12*a26);
  a15=(a15+a19);
  a9=(a9-a15);
  if (res[4]!=0) res[4][0]=a9;
  a15=(a10*a25);
  a19=(a22*a24);
  a18=(a2*a26);
  a19=(a19-a18);
  a15=(a15+a19);
  if (res[4]!=0) res[4][1]=a15;
  a25=(a14*a25);
  a19=(a3*a24);
  a18=(a23*a26);
  a19=(a19-a18);
  a25=(a25+a19);
  if (res[4]!=0) res[4][2]=a25;
  if (res[4]!=0) res[4][3]=a4;
  a19=(a12*a24);
  a21=(a21*a26);
  a19=(a19-a21);
  a21=(a11*a24);
  a18=(a13*a21);
  a19=(a19-a18);
  if (res[4]!=0) res[4][4]=a19;
  a22=(a22*a26);
  a18=(a2*a24);
  a22=(a22+a18);
  a18=(a10*a21);
  a22=(a22-a18);
  if (res[4]!=0) res[4][5]=a22;
  a3=(a3*a26);
  a24=(a23*a24);
  a3=(a3+a24);
  a21=(a14*a21);
  a3=(a3-a21);
  if (res[4]!=0) res[4][6]=a3;
  if (res[4]!=0) res[4][7]=a4;
  a21=(a11*a12);
  a21=(a13+a21);
  if (res[4]!=0) res[4][8]=a21;
  a24=(a11*a2);
  a24=(a10+a24);
  if (res[4]!=0) res[4][9]=a24;
  a26=(a11*a23);
  a26=(a14+a26);
  if (res[4]!=0) res[4][10]=a26;
  if (res[4]!=0) res[4][11]=a4;
  a18=5.8999999999999997e-02;
  a13=(a18*a13);
  a16=-3.4150000000000003e-01;
  a12=(a16*a12);
  a13=(a13+a12);
  a1=(a1+a13);
  if (res[4]!=0) res[4][12]=a1;
  a10=(a18*a10);
  a2=(a16*a2);
  a10=(a10+a2);
  a5=(a5+a10);
  if (res[4]!=0) res[4][13]=a5;
  a18=(a18*a14);
  a16=(a16*a23);
  a18=(a18+a16);
  a6=(a6+a18);
  if (res[4]!=0) res[4][14]=a6;
  if (res[4]!=0) res[4][15]=a7;
  a18=arg[0]? arg[0][5] : 0;
  a16=cos(a18);
  a23=(a11*a16);
  a14=(a9*a23);
  a18=sin(a18);
  a10=(a19*a18);
  a2=(a21*a16);
  a10=(a10+a2);
  a14=(a14+a10);
  if (res[5]!=0) res[5][0]=a14;
  a10=(a15*a23);
  a2=(a22*a18);
  a13=(a24*a16);
  a2=(a2+a13);
  a10=(a10+a2);
  if (res[5]!=0) res[5][1]=a10;
  a23=(a25*a23);
  a2=(a3*a18);
  a13=(a26*a16);
  a2=(a2+a13);
  a23=(a23+a2);
  if (res[5]!=0) res[5][2]=a23;
  if (res[5]!=0) res[5][3]=a4;
  a19=(a19*a16);
  a2=(a21*a18);
  a19=(a19-a2);
  a2=(a11*a18);
  a13=(a9*a2);
  a19=(a19-a13);
  if (res[5]!=0) res[5][4]=a19;
  a22=(a22*a16);
  a13=(a24*a18);
  a22=(a22-a13);
  a13=(a15*a2);
  a22=(a22-a13);
  if (res[5]!=0) res[5][5]=a22;
  a3=(a3*a16);
  a18=(a26*a18);
  a3=(a3-a18);
  a2=(a25*a2);
  a3=(a3-a2);
  if (res[5]!=0) res[5][6]=a3;
  if (res[5]!=0) res[5][7]=a4;
  a2=(a11*a21);
  a2=(a2-a9);
  if (res[5]!=0) res[5][8]=a2;
  a18=(a11*a24);
  a18=(a18-a15);
  if (res[5]!=0) res[5][9]=a18;
  a11=(a11*a26);
  a11=(a11-a25);
  if (res[5]!=0) res[5][10]=a11;
  if (res[5]!=0) res[5][11]=a4;
  a16=2.0999999999999999e-01;
  a9=(a16*a9);
  a13=-5.8999999999999997e-02;
  a21=(a13*a21);
  a9=(a9+a21);
  a1=(a1+a9);
  if (res[5]!=0) res[5][12]=a1;
  a15=(a16*a15);
  a24=(a13*a24);
  a15=(a15+a24);
  a5=(a5+a15);
  if (res[5]!=0) res[5][13]=a5;
  a16=(a16*a25);
  a13=(a13*a26);
  a16=(a16+a13);
  a6=(a6+a16);
  if (res[5]!=0) res[5][14]=a6;
  if (res[5]!=0) res[5][15]=a7;
  a16=-5.1034731995969196e-12;
  a13=(a16*a14);
  a26=1.0000000000000002e+00;
  a25=(a26*a19);
  a13=(a13+a25);
  if (res[6]!=0) res[6][0]=a13;
  a13=(a16*a10);
  a25=(a26*a22);
  a13=(a13+a25);
  if (res[6]!=0) res[6][1]=a13;
  a16=(a16*a23);
  a13=(a26*a3);
  a16=(a16+a13);
  if (res[6]!=0) res[6][2]=a16;
  if (res[6]!=0) res[6][3]=a4;
  a16=(a26*a14);
  a13=5.1032511549919946e-12;
  a25=(a13*a19);
  a15=-1.0206823934513927e-11;
  a24=(a15*a2);
  a25=(a25+a24);
  a16=(a16+a25);
  if (res[6]!=0) res[6][4]=a16;
  a16=(a26*a10);
  a25=(a13*a22);
  a24=(a15*a18);
  a25=(a25+a24);
  a16=(a16+a25);
  if (res[6]!=0) res[6][5]=a16;
  a26=(a26*a23);
  a13=(a13*a3);
  a16=(a15*a11);
  a13=(a13+a16);
  a26=(a26+a13);
  if (res[6]!=0) res[6][6]=a26;
  if (res[6]!=0) res[6][7]=a4;
  a14=(a15*a14);
  a26=-5.2089760370966247e-23;
  a19=(a26*a19);
  a19=(a19-a2);
  a14=(a14+a19);
  if (res[6]!=0) res[6][8]=a14;
  a10=(a15*a10);
  a22=(a26*a22);
  a22=(a22-a18);
  a10=(a10+a22);
  if (res[6]!=0) res[6][9]=a10;
  a15=(a15*a23);
  a26=(a26*a3);
  a26=(a26-a11);
  a15=(a15+a26);
  if (res[6]!=0) res[6][10]=a15;
  if (res[6]!=0) res[6][11]=a4;
  a4=-2.9999999999999999e-02;
  a2=(a4*a2);
  a1=(a1+a2);
  if (res[6]!=0) res[6][12]=a1;
  a18=(a4*a18);
  a5=(a5+a18);
  if (res[6]!=0) res[6][13]=a5;
  a4=(a4*a11);
  a6=(a6+a4);
  if (res[6]!=0) res[6][14]=a6;
  if (res[6]!=0) res[6][15]=a7;
  return 0;
}

CASADI_SYMBOL_EXPORT int fk_T(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int fk_T_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int fk_T_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void fk_T_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int fk_T_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void fk_T_release(int mem) {
}

CASADI_SYMBOL_EXPORT void fk_T_incref(void) {
}

CASADI_SYMBOL_EXPORT void fk_T_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int fk_T_n_in(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_int fk_T_n_out(void) { return 7;}

CASADI_SYMBOL_EXPORT casadi_real fk_T_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* fk_T_name_in(casadi_int i) {
  switch (i) {
    case 0: return "q";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* fk_T_name_out(casadi_int i) {
  switch (i) {
    case 0: return "T_joint1";
    case 1: return "T_joint2";
    case 2: return "T_joint3";
    case 3: return "T_joint4";
    case 4: return "T_joint5";
    case 5: return "T_joint6";
    case 6: return "T_tcp_joint";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* fk_T_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* fk_T_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    case 1: return casadi_s1;
    case 2: return casadi_s1;
    case 3: return casadi_s1;
    case 4: return casadi_s1;
    case 5: return casadi_s1;
    case 6: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int fk_T_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 7;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
