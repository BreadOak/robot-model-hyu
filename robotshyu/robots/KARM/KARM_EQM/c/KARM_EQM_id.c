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
  #define CASADI_PREFIX(ID) KARM_EQM_id_ ## ID
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

static const casadi_int casadi_s0[11] = {7, 1, 0, 7, 0, 1, 2, 3, 4, 5, 6};

/* rnea:(q[7],dq[7],ddq[7])->(tau[7]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a100, a101, a102, a103, a104, a105, a106, a107, a108, a109, a11, a110, a111, a112, a113, a114, a115, a116, a117, a118, a119, a12, a120, a121, a122, a123, a124, a125, a126, a127, a128, a129, a13, a130, a131, a132, a133, a134, a135, a136, a137, a138, a139, a14, a140, a141, a142, a143, a144, a145, a146, a147, a148, a149, a15, a150, a151, a152, a153, a154, a155, a156, a157, a158, a159, a16, a160, a161, a162, a163, a164, a165, a166, a167, a168, a169, a17, a170, a171, a172, a173, a174, a175, a176, a177, a178, a179, a18, a180, a181, a182, a183, a184, a185, a186, a187, a188, a189, a19, a190, a191, a192, a193, a194, a195, a196, a197, a198, a199, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a66, a67, a68, a69, a7, a70, a71, a72, a73, a74, a75, a76, a77, a78, a79, a8, a80, a81, a82, a83, a84, a85, a86, a87, a88, a89, a9, a90, a91, a92, a93, a94, a95, a96, a97, a98, a99;
  a0=1.8752999999999999e-02;
  a1=arg[2]? arg[2][0] : 0;
  a0=(a0*a1);
  a2=2.3384000000000001e-07;
  a3=4.4336000000000002e+00;
  a4=(a2*a1);
  a4=(a3*a4);
  a2=(a2*a4);
  a4=-9.2222999999999999e-02;
  a5=(a4*a1);
  a3=(a3*a5);
  a4=(a4*a3);
  a2=(a2+a4);
  a0=(a0+a2);
  a2=arg[0]? arg[0][1] : 0;
  a4=cos(a2);
  a3=2.3041103294953500e-04;
  a5=arg[2]? arg[2][1] : 0;
  a6=(a3*a5);
  a7=1.7735173875919501e-07;
  a8=arg[1]? arg[1][1] : 0;
  a9=arg[1]? arg[1][0] : 0;
  a10=(a4*a9);
  a11=(a8*a10);
  a2=sin(a2);
  a12=(a2*a1);
  a11=(a11+a12);
  a12=(a7*a11);
  a6=(a6-a12);
  a12=1.7640599948384801e-02;
  a13=(a4*a1);
  a14=(a2*a9);
  a15=(a8*a14);
  a13=(a13-a15);
  a15=(a12*a13);
  a6=(a6+a15);
  a15=-3.9394877682230600e-07;
  a16=5.3359795883108898e+00;
  a17=4.4521109267002501e-01;
  a18=(a17*a11);
  a19=(a15*a13);
  a18=(a18+a19);
  a18=(a16*a18);
  a19=(a15*a18);
  a20=8.3897330018817898e-02;
  a21=9.1499999999999998e-02;
  a9=(a21*a9);
  a22=(a2*a9);
  a23=(a8*a22);
  a1=(a21*a1);
  a24=(a4*a1);
  a25=9.8100000000000005e+00;
  a26=(a25*a2);
  a24=(a24+a26);
  a23=(a23-a24);
  a24=(a20*a13);
  a26=(a17*a5);
  a24=(a24-a26);
  a24=(a23-a24);
  a24=(a16*a24);
  a26=(a20*a24);
  a19=(a19-a26);
  a6=(a6+a19);
  a19=2.1449486710780599e-01;
  a26=(a19*a8);
  a27=-8.8991531588552002e-08;
  a28=(a27*a14);
  a26=(a26-a28);
  a28=(a3*a10);
  a26=(a26+a28);
  a28=(a15*a8);
  a29=(a20*a14);
  a28=(a28+a29);
  a28=(a22+a28);
  a28=(a16*a28);
  a29=(a15*a28);
  a9=(a4*a9);
  a30=(a20*a10);
  a31=(a17*a8);
  a30=(a30-a31);
  a30=(a9+a30);
  a30=(a16*a30);
  a31=(a17*a30);
  a29=(a29-a31);
  a26=(a26+a29);
  a29=(a14*a26);
  a31=(a27*a8);
  a32=2.1396100805997201e-01;
  a33=(a32*a14);
  a31=(a31-a33);
  a33=(a7*a10);
  a31=(a31+a33);
  a33=(a20*a28);
  a34=(a17*a14);
  a35=(a15*a10);
  a34=(a34+a35);
  a34=(a16*a34);
  a35=(a17*a34);
  a33=(a33+a35);
  a31=(a31-a33);
  a33=(a8*a31);
  a29=(a29+a33);
  a33=(a9*a34);
  a29=(a29+a33);
  a6=(a6-a29);
  a29=-2.1861258322928699e-02;
  a33=arg[0]? arg[0][2] : 0;
  a35=cos(a33);
  a36=(a29*a35);
  a37=1.8266999999999999e-02;
  a38=arg[1]? arg[1][2] : 0;
  a39=9.9976101413514729e-01;
  a33=sin(a33);
  a40=(a39*a33);
  a41=(a40*a14);
  a42=(a35*a8);
  a43=(a29*a33);
  a44=(a43*a10);
  a42=(a42-a44);
  a41=(a41+a42);
  a42=(a38*a41);
  a44=(a33*a5);
  a45=(a36*a13);
  a44=(a44+a45);
  a45=(a39*a35);
  a46=(a45*a11);
  a44=(a44-a46);
  a42=(a42+a44);
  a44=(a37*a42);
  a46=5.1260999999999999e-06;
  a47=(a40*a11);
  a48=(a35*a5);
  a49=(a43*a13);
  a48=(a48-a49);
  a47=(a47+a48);
  a48=(a33*a8);
  a49=(a36*a10);
  a48=(a48+a49);
  a49=(a45*a14);
  a48=(a48-a49);
  a49=(a38*a48);
  a47=(a47-a49);
  a49=(a46*a47);
  a44=(a44+a49);
  a49=-1.2787000000000001e-04;
  a50=arg[2]? arg[2][2] : 0;
  a51=(a39*a13);
  a52=2.1861258322928699e-02;
  a53=(a52*a11);
  a51=(a51-a53);
  a50=(a50+a51);
  a51=(a49*a50);
  a44=(a44+a51);
  a51=-6.4990999999999998e-03;
  a53=4.3966000000000003e+00;
  a54=(a21*a13);
  a55=1.0012000000000001e+00;
  a56=(a55*a5);
  a54=(a54-a56);
  a23=(a23-a54);
  a54=(a52*a23);
  a25=(a25*a4);
  a1=(a2*a1);
  a25=(a25-a1);
  a1=(a8*a9);
  a25=(a25-a1);
  a1=(a21*a11);
  a1=(a25-a1);
  a56=(a39*a1);
  a54=(a54+a56);
  a56=-5.5167000000000002e-03;
  a57=(a56*a47);
  a58=(a51*a42);
  a57=(a57-a58);
  a57=(a54-a57);
  a57=(a53*a57);
  a58=(a51*a57);
  a59=2.5230999999999998e-01;
  a60=(a55*a11);
  a61=(a35*a60);
  a62=(a43*a1);
  a61=(a61-a62);
  a62=(a40*a23);
  a61=(a61-a62);
  a62=(a55*a14);
  a63=(a33*a62);
  a64=(a21*a14);
  a64=(a22+a64);
  a65=(a36*a64);
  a63=(a63-a65);
  a65=(a21*a10);
  a66=(a55*a8);
  a65=(a65-a66);
  a65=(a9+a65);
  a66=(a45*a65);
  a63=(a63-a66);
  a66=(a38*a63);
  a61=(a61-a66);
  a66=(a59*a42);
  a67=(a56*a50);
  a66=(a66-a67);
  a66=(a61-a66);
  a66=(a53*a66);
  a67=(a59*a66);
  a58=(a58-a67);
  a44=(a44+a58);
  a58=(a49*a48);
  a67=-2.3034999999999999e-04;
  a68=(a67*a41);
  a58=(a58+a68);
  a68=1.2414000000000000e-02;
  a69=(a39*a10);
  a70=(a52*a14);
  a69=(a69-a70);
  a69=(a38+a69);
  a70=(a68*a69);
  a58=(a58+a70);
  a70=(a40*a65);
  a62=(a35*a62);
  a71=(a43*a64);
  a62=(a62+a71);
  a70=(a70+a62);
  a62=(a59*a48);
  a71=(a56*a69);
  a62=(a62-a71);
  a62=(a70-a62);
  a62=(a53*a62);
  a71=(a56*a62);
  a72=(a51*a69);
  a73=(a59*a41);
  a72=(a72-a73);
  a72=(a63-a72);
  a72=(a53*a72);
  a73=(a51*a72);
  a71=(a71-a73);
  a58=(a58+a71);
  a71=(a41*a58);
  a73=(a46*a48);
  a74=1.9019000000000001e-02;
  a75=(a74*a41);
  a73=(a73+a75);
  a75=(a67*a69);
  a73=(a73+a75);
  a75=(a59*a72);
  a65=(a52*a65);
  a64=(a39*a64);
  a65=(a65+a64);
  a64=(a56*a41);
  a76=(a51*a48);
  a64=(a64-a76);
  a64=(a65+a64);
  a64=(a53*a64);
  a76=(a56*a64);
  a75=(a75+a76);
  a73=(a73+a75);
  a75=(a69*a73);
  a71=(a71-a75);
  a75=(a65*a62);
  a76=(a70*a64);
  a75=(a75-a76);
  a71=(a71+a75);
  a44=(a44+a71);
  a71=arg[0]? arg[0][3] : 0;
  a75=cos(a71);
  a76=(a39*a75);
  a71=sin(a71);
  a77=(a29*a71);
  a76=(a76-a77);
  a77=4.5436854305732292e-02;
  a78=(a76*a42);
  a79=(a52*a75);
  a80=(a39*a71);
  a79=(a79-a80);
  a80=(a79*a50);
  a78=(a78+a80);
  a80=arg[1]? arg[1][3] : 0;
  a81=(a39*a71);
  a29=(a29*a75);
  a81=(a81+a29);
  a29=(a81*a48);
  a71=(a52*a71);
  a75=(a39*a75);
  a71=(a71+a75);
  a75=(a71*a69);
  a29=(a29+a75);
  a75=(a80*a29);
  a78=(a78-a75);
  a75=(a77*a78);
  a82=-8.8991531775255494e-08;
  a83=arg[2]? arg[2][3] : 0;
  a83=(a83+a47);
  a84=(a82*a83);
  a75=(a75+a84);
  a84=-1.7735173847406299e-07;
  a85=(a76*a48);
  a86=(a79*a69);
  a85=(a85+a86);
  a86=(a80*a85);
  a87=(a81*a42);
  a88=(a71*a50);
  a87=(a87+a88);
  a86=(a86+a87);
  a87=(a84*a86);
  a75=(a75+a87);
  a87=-8.1521800307567199e-02;
  a88=4.0656323872673701e+00;
  a89=-9.1499999999999998e-02;
  a90=(a89*a69);
  a91=4.4867000000000001e-01;
  a92=(a91*a41);
  a90=(a90-a92);
  a90=(a63-a90);
  a92=(a76*a90);
  a93=-9.8110000000000003e-03;
  a94=(a93*a41);
  a95=(a89*a48);
  a94=(a94-a95);
  a94=(a65+a94);
  a95=(a79*a94);
  a92=(a92-a95);
  a95=(a80*a92);
  a38=(a38*a70);
  a23=(a45*a23);
  a60=(a33*a60);
  a1=(a36*a1);
  a60=(a60+a1);
  a23=(a23+a60);
  a38=(a38+a23);
  a23=(a89*a50);
  a60=(a91*a47);
  a23=(a23-a60);
  a23=(a38-a23);
  a60=(a81*a23);
  a1=(a93*a47);
  a96=(a89*a42);
  a1=(a1-a96);
  a54=(a54-a1);
  a1=(a71*a54);
  a60=(a60+a1);
  a95=(a95+a60);
  a60=5.4301437002468599e-07;
  a1=(a60*a83);
  a96=(a87*a78);
  a1=(a1-a96);
  a1=(a95-a1);
  a1=(a88*a1);
  a96=(a87*a1);
  a97=2.5556456565116298e-01;
  a98=(a91*a42);
  a99=(a93*a50);
  a98=(a98-a99);
  a61=(a61-a98);
  a98=(a97*a78);
  a99=(a60*a86);
  a98=(a98-a99);
  a98=(a61-a98);
  a98=(a88*a98);
  a99=(a97*a98);
  a96=(a96-a99);
  a75=(a75+a96);
  a96=(a80+a41);
  a99=(a84*a85);
  a100=-2.3041103295395001e-04;
  a101=(a100*a96);
  a99=(a99+a101);
  a101=1.2668778228784100e-02;
  a102=(a101*a29);
  a99=(a99+a102);
  a102=(a91*a48);
  a103=(a93*a69);
  a102=(a102-a103);
  a102=(a70-a102);
  a103=(a97*a85);
  a104=(a60*a29);
  a103=(a103-a104);
  a103=(a102-a103);
  a103=(a88*a103);
  a104=(a60*a103);
  a105=(a87*a29);
  a106=(a97*a96);
  a105=(a105-a106);
  a105=(a92-a105);
  a105=(a88*a105);
  a106=(a87*a105);
  a104=(a104-a106);
  a99=(a99+a104);
  a104=(a96*a99);
  a106=(a82*a85);
  a107=4.5972826267369503e-02;
  a108=(a107*a96);
  a106=(a106+a108);
  a108=(a100*a29);
  a106=(a106+a108);
  a108=(a97*a105);
  a90=(a81*a90);
  a94=(a71*a94);
  a90=(a90-a94);
  a94=(a60*a96);
  a109=(a87*a85);
  a94=(a94-a109);
  a94=(a90-a94);
  a94=(a88*a94);
  a109=(a60*a94);
  a108=(a108-a109);
  a106=(a106+a108);
  a108=(a29*a106);
  a104=(a104-a108);
  a108=(a102*a94);
  a109=(a90*a103);
  a108=(a108-a109);
  a104=(a104+a108);
  a75=(a75+a104);
  a104=arg[0]? arg[0][4] : 0;
  a108=cos(a104);
  a109=1.8269472263079300e-02;
  a110=arg[1]? arg[1][4] : 0;
  a111=(a108*a96);
  a104=sin(a104);
  a112=(a104*a85);
  a111=(a111-a112);
  a112=(a110*a111);
  a113=(a108*a78);
  a114=(a104*a83);
  a113=(a113+a114);
  a112=(a112+a113);
  a113=(a109*a112);
  a114=8.8991531815794597e-08;
  a115=(a108*a83);
  a116=(a104*a78);
  a115=(a115-a116);
  a116=(a108*a85);
  a117=(a104*a96);
  a116=(a116+a117);
  a117=(a110*a116);
  a115=(a115-a117);
  a117=(a114*a115);
  a113=(a113+a117);
  a117=1.7735173797526300e-07;
  a118=arg[2]? arg[2][4] : 0;
  a118=(a118+a86);
  a119=(a117*a118);
  a113=(a113+a119);
  a119=-6.4991372194738301e-03;
  a120=4.3966153329908702e+00;
  a121=(a89*a78);
  a95=(a95+a121);
  a121=4.9605672602925900e-07;
  a122=(a121*a115);
  a123=(a119*a112);
  a122=(a122-a123);
  a122=(a95-a122);
  a122=(a120*a122);
  a123=(a119*a122);
  a124=2.4909168564931500e-01;
  a125=6.0450000000000004e-01;
  a126=(a125*a78);
  a61=(a61-a126);
  a126=(a108*a61);
  a23=(a76*a23);
  a54=(a79*a54);
  a23=(a23+a54);
  a80=(a80*a90);
  a23=(a23-a80);
  a80=(a89*a86);
  a54=(a125*a83);
  a80=(a80-a54);
  a80=(a23-a80);
  a54=(a104*a80);
  a126=(a126-a54);
  a54=(a89*a29);
  a127=(a125*a96);
  a54=(a54-a127);
  a54=(a92-a54);
  a127=(a108*a54);
  a128=(a125*a85);
  a128=(a102-a128);
  a129=(a104*a128);
  a127=(a127+a129);
  a129=(a110*a127);
  a126=(a126-a129);
  a129=(a124*a112);
  a130=(a121*a118);
  a129=(a129-a130);
  a129=(a126-a129);
  a129=(a120*a129);
  a130=(a124*a129);
  a123=(a123-a130);
  a113=(a113+a123);
  a123=(a117*a116);
  a130=-2.3041103295346301e-04;
  a131=(a130*a111);
  a123=(a123+a131);
  a131=1.2411084186524901e-02;
  a132=(a110+a29);
  a133=(a131*a132);
  a123=(a123+a133);
  a128=(a108*a128);
  a54=(a104*a54);
  a128=(a128-a54);
  a54=(a124*a116);
  a133=(a121*a132);
  a54=(a54-a133);
  a54=(a128-a54);
  a54=(a120*a54);
  a133=(a121*a54);
  a134=(a119*a132);
  a135=(a124*a111);
  a134=(a134-a135);
  a134=(a127-a134);
  a134=(a120*a134);
  a135=(a119*a134);
  a133=(a133-a135);
  a123=(a123+a133);
  a133=(a111*a123);
  a135=(a114*a116);
  a136=1.9019363614389401e-02;
  a137=(a136*a111);
  a135=(a135+a137);
  a137=(a130*a132);
  a135=(a135+a137);
  a137=(a124*a134);
  a138=(a89*a85);
  a138=(a90+a138);
  a139=(a121*a111);
  a140=(a119*a116);
  a139=(a139-a140);
  a139=(a138-a139);
  a139=(a120*a139);
  a140=(a121*a139);
  a137=(a137-a140);
  a135=(a135+a137);
  a137=(a132*a135);
  a133=(a133-a137);
  a137=(a128*a139);
  a140=(a138*a54);
  a137=(a137-a140);
  a133=(a133+a137);
  a113=(a113+a133);
  a133=arg[0]? arg[0][5] : 0;
  a137=cos(a133);
  a140=1.9816888131480501e-02;
  a141=(a137*a112);
  a133=sin(a133);
  a142=(a133*a118);
  a141=(a141-a142);
  a142=arg[1]? arg[1][5] : 0;
  a143=(a133*a116);
  a144=(a137*a132);
  a143=(a143+a144);
  a144=(a142*a143);
  a141=(a141-a144);
  a144=(a140*a141);
  a145=8.1642181278501805e-08;
  a146=arg[2]? arg[2][5] : 0;
  a146=(a146+a115);
  a147=(a145*a146);
  a144=(a144+a147);
  a147=-1.6765547614305500e-07;
  a148=(a137*a116);
  a149=(a133*a132);
  a148=(a148-a149);
  a149=(a142*a148);
  a150=(a133*a112);
  a151=(a137*a118);
  a150=(a150+a151);
  a149=(a149+a150);
  a150=(a147*a149);
  a144=(a144+a150);
  a150=-8.6159645667572102e-02;
  a151=4.6288829004835899e+00;
  a152=(a89*a132);
  a153=4.4550000000000001e-01;
  a154=(a153*a111);
  a152=(a152-a154);
  a152=(a127-a152);
  a154=(a137*a152);
  a155=(a89*a116);
  a155=(a138+a155);
  a156=(a133*a155);
  a154=(a154-a156);
  a156=(a142*a154);
  a110=(a110*a128);
  a80=(a108*a80);
  a61=(a104*a61);
  a80=(a80+a61);
  a110=(a110+a80);
  a80=(a89*a118);
  a61=(a153*a115);
  a80=(a80-a61);
  a80=(a110-a80);
  a61=(a133*a80);
  a157=(a89*a112);
  a95=(a95+a157);
  a157=(a137*a95);
  a61=(a61+a157);
  a156=(a156+a61);
  a61=-2.2397201748791699e-07;
  a157=(a61*a146);
  a158=(a150*a141);
  a157=(a157-a158);
  a157=(a156-a157);
  a157=(a151*a157);
  a158=(a150*a157);
  a159=-8.0914204686578298e-02;
  a160=(a153*a112);
  a126=(a126-a160);
  a160=(a159*a141);
  a161=(a61*a149);
  a160=(a160-a161);
  a160=(a126-a160);
  a160=(a151*a160);
  a161=(a159*a160);
  a158=(a158-a161);
  a144=(a144+a158);
  a158=(a142+a111);
  a161=(a147*a148);
  a162=1.2661327428857900e-07;
  a163=(a162*a158);
  a161=(a161+a163);
  a163=1.3198316224677100e-02;
  a164=(a163*a143);
  a161=(a161+a164);
  a164=(a153*a116);
  a164=(a128-a164);
  a165=(a159*a148);
  a166=(a61*a143);
  a165=(a165-a166);
  a165=(a164-a165);
  a165=(a151*a165);
  a166=(a61*a165);
  a167=(a150*a143);
  a168=(a159*a158);
  a167=(a167-a168);
  a167=(a154-a167);
  a167=(a151*a167);
  a168=(a150*a167);
  a166=(a166-a168);
  a161=(a161+a166);
  a166=(a158*a161);
  a168=(a145*a148);
  a169=2.0688056857569300e-02;
  a170=(a169*a158);
  a168=(a168+a170);
  a170=(a162*a143);
  a168=(a168+a170);
  a170=(a159*a167);
  a152=(a133*a152);
  a155=(a137*a155);
  a152=(a152+a155);
  a155=(a61*a158);
  a171=(a150*a148);
  a155=(a155-a171);
  a155=(a152-a155);
  a155=(a151*a155);
  a171=(a61*a155);
  a170=(a170-a171);
  a168=(a168+a170);
  a170=(a143*a168);
  a166=(a166-a170);
  a170=(a164*a155);
  a171=(a152*a165);
  a170=(a170-a171);
  a166=(a166+a170);
  a144=(a144+a166);
  a166=arg[0]? arg[0][6] : 0;
  a170=cos(a166);
  a171=1.7722000010000000e-03;
  a172=arg[1]? arg[1][6] : 0;
  a173=(a170*a158);
  a166=sin(a166);
  a174=(a166*a148);
  a173=(a173-a174);
  a174=(a172*a173);
  a175=(a170*a141);
  a176=(a166*a146);
  a175=(a175+a176);
  a174=(a174+a175);
  a175=(a171*a174);
  a176=2.6970999999999998e-19;
  a177=(a170*a146);
  a178=(a166*a141);
  a177=(a177-a178);
  a178=(a170*a148);
  a179=(a166*a158);
  a178=(a178+a179);
  a179=(a172*a178);
  a177=(a177-a179);
  a179=(a176*a177);
  a175=(a175+a179);
  a179=-3.0047000000000002e-19;
  a180=arg[2]? arg[2][6] : 0;
  a180=(a180+a149);
  a181=(a179*a180);
  a175=(a175+a181);
  a181=7.1109999999999999e-14;
  a182=1.2654000000000001e+00;
  a183=(a89*a141);
  a156=(a156+a183);
  a183=6.6613000000000004e-16;
  a184=(a183*a177);
  a185=(a181*a174);
  a184=(a184-a185);
  a156=(a156-a184);
  a156=(a182*a156);
  a184=(a181*a156);
  a185=4.3062999999999997e-02;
  a186=1.2800000000000000e-01;
  a187=(a186*a141);
  a126=(a126-a187);
  a187=(a170*a126);
  a80=(a137*a80);
  a95=(a133*a95);
  a80=(a80-a95);
  a142=(a142*a152);
  a80=(a80-a142);
  a142=(a89*a149);
  a95=(a186*a146);
  a142=(a142-a95);
  a142=(a80-a142);
  a95=(a166*a142);
  a187=(a187-a95);
  a95=(a89*a143);
  a188=(a186*a158);
  a95=(a95-a188);
  a95=(a154-a95);
  a188=(a170*a95);
  a189=(a186*a148);
  a189=(a164-a189);
  a190=(a166*a189);
  a188=(a188+a190);
  a190=(a172*a188);
  a187=(a187-a190);
  a190=(a185*a174);
  a191=(a183*a180);
  a190=(a190-a191);
  a187=(a187-a190);
  a187=(a182*a187);
  a190=(a185*a187);
  a184=(a184-a190);
  a175=(a175+a184);
  a184=(a179*a178);
  a190=1.4610999999999999e-19;
  a191=(a190*a173);
  a184=(a184+a191);
  a191=2.6930000010000001e-03;
  a192=(a172+a143);
  a193=(a191*a192);
  a184=(a184+a193);
  a189=(a170*a189);
  a95=(a166*a95);
  a189=(a189-a95);
  a95=(a185*a178);
  a193=(a183*a192);
  a95=(a95-a193);
  a95=(a189-a95);
  a95=(a182*a95);
  a193=(a183*a95);
  a194=(a181*a192);
  a195=(a185*a173);
  a194=(a194-a195);
  a194=(a188-a194);
  a194=(a182*a194);
  a195=(a181*a194);
  a193=(a193-a195);
  a184=(a184+a193);
  a193=(a173*a184);
  a195=(a176*a178);
  a196=(a171*a173);
  a195=(a195+a196);
  a196=(a190*a192);
  a195=(a195+a196);
  a196=(a185*a194);
  a197=(a89*a148);
  a197=(a152+a197);
  a198=(a183*a173);
  a199=(a181*a178);
  a198=(a198-a199);
  a198=(a197-a198);
  a198=(a182*a198);
  a199=(a183*a198);
  a196=(a196-a199);
  a195=(a195+a196);
  a196=(a192*a195);
  a193=(a193-a196);
  a196=(a189*a198);
  a199=(a197*a95);
  a196=(a196-a199);
  a193=(a193+a196);
  a175=(a175+a193);
  a193=(a170*a175);
  a196=(a176*a174);
  a199=(a171*a177);
  a196=(a196+a199);
  a199=(a190*a180);
  a196=(a196+a199);
  a172=(a172*a189);
  a142=(a170*a142);
  a126=(a166*a126);
  a142=(a142+a126);
  a172=(a172+a142);
  a142=(a181*a180);
  a126=(a185*a177);
  a142=(a142-a126);
  a172=(a172-a142);
  a182=(a182*a172);
  a172=(a185*a182);
  a142=(a183*a156);
  a172=(a172-a142);
  a196=(a196+a172);
  a171=(a171*a178);
  a176=(a176*a173);
  a171=(a171+a176);
  a176=(a179*a192);
  a171=(a171+a176);
  a176=(a181*a198);
  a185=(a185*a95);
  a176=(a176-a185);
  a171=(a171+a176);
  a176=(a192*a171);
  a184=(a178*a184);
  a176=(a176-a184);
  a197=(a197*a194);
  a184=(a188*a198);
  a197=(a197-a184);
  a176=(a176+a197);
  a196=(a196+a176);
  a176=(a166*a196);
  a193=(a193-a176);
  a176=(a178*a95);
  a197=(a173*a194);
  a176=(a176-a197);
  a156=(a156+a176);
  a176=(a89*a156);
  a197=(a173*a198);
  a184=(a192*a95);
  a197=(a197-a184);
  a197=(a182+a197);
  a184=(a166*a197);
  a192=(a192*a194);
  a198=(a178*a198);
  a192=(a192-a198);
  a192=(a187+a192);
  a198=(a170*a192);
  a184=(a184+a198);
  a198=(a186*a184);
  a176=(a176-a198);
  a193=(a193+a176);
  a144=(a144+a193);
  a193=(a137*a144);
  a176=(a147*a141);
  a198=(a162*a146);
  a176=(a176+a198);
  a163=(a163*a149);
  a176=(a176+a163);
  a163=(a61*a160);
  a198=(a150*a149);
  a185=(a159*a146);
  a198=(a198-a185);
  a80=(a80-a198);
  a151=(a151*a80);
  a80=(a150*a151);
  a163=(a163-a80);
  a176=(a176+a163);
  a168=(a148*a168);
  a140=(a140*a148);
  a163=(a145*a158);
  a140=(a140+a163);
  a147=(a147*a143);
  a140=(a140+a147);
  a150=(a150*a155);
  a147=(a159*a165);
  a150=(a150-a147);
  a140=(a140+a150);
  a150=(a158*a140);
  a168=(a168-a150);
  a150=(a154*a165);
  a164=(a164*a167);
  a150=(a150-a164);
  a168=(a168+a150);
  a176=(a176+a168);
  a179=(a179*a174);
  a190=(a190*a177);
  a179=(a179+a190);
  a191=(a191*a180);
  a179=(a179+a191);
  a183=(a183*a187);
  a181=(a181*a182);
  a183=(a183-a181);
  a179=(a179+a183);
  a178=(a178*a195);
  a173=(a173*a171);
  a178=(a178-a173);
  a188=(a188*a95);
  a189=(a189*a194);
  a188=(a188-a189);
  a178=(a178+a188);
  a179=(a179+a178);
  a197=(a170*a197);
  a192=(a166*a192);
  a197=(a197-a192);
  a192=(a89*a197);
  a192=(a179-a192);
  a176=(a176+a192);
  a192=(a133*a176);
  a193=(a193+a192);
  a192=(a148*a165);
  a178=(a158*a167);
  a192=(a192-a178);
  a192=(a157+a192);
  a192=(a192+a156);
  a156=(a137*a192);
  a158=(a158*a155);
  a165=(a143*a165);
  a158=(a158-a165);
  a158=(a151+a158);
  a158=(a158+a197);
  a165=(a133*a158);
  a156=(a156-a165);
  a165=(a89*a156);
  a178=(a143*a167);
  a188=(a148*a155);
  a178=(a178-a188);
  a160=(a160+a178);
  a160=(a160+a184);
  a184=(a153*a160);
  a165=(a165-a184);
  a193=(a193+a165);
  a113=(a113+a193);
  a193=(a108*a113);
  a165=(a114*a112);
  a136=(a136*a115);
  a165=(a165+a136);
  a136=(a130*a118);
  a165=(a165+a136);
  a136=(a119*a118);
  a184=(a124*a115);
  a136=(a136-a184);
  a110=(a110-a136);
  a120=(a120*a110);
  a110=(a124*a120);
  a136=(a121*a122);
  a110=(a110-a136);
  a165=(a165+a110);
  a109=(a109*a116);
  a114=(a114*a111);
  a109=(a109+a114);
  a114=(a117*a132);
  a109=(a109+a114);
  a114=(a119*a139);
  a124=(a124*a54);
  a114=(a114-a124);
  a109=(a109+a114);
  a114=(a132*a109);
  a123=(a116*a123);
  a114=(a114-a123);
  a138=(a138*a134);
  a123=(a127*a139);
  a138=(a138-a123);
  a114=(a114+a138);
  a165=(a165+a114);
  a145=(a145*a141);
  a169=(a169*a146);
  a145=(a145+a169);
  a162=(a162*a149);
  a145=(a145+a162);
  a159=(a159*a151);
  a61=(a61*a157);
  a159=(a159-a61);
  a145=(a145+a159);
  a143=(a143*a140);
  a148=(a148*a161);
  a143=(a143-a148);
  a152=(a152*a167);
  a154=(a154*a155);
  a152=(a152-a154);
  a143=(a143+a152);
  a145=(a145+a143);
  a166=(a166*a175);
  a170=(a170*a196);
  a166=(a166+a170);
  a186=(a186*a197);
  a166=(a166+a186);
  a145=(a145+a166);
  a158=(a137*a158);
  a192=(a133*a192);
  a158=(a158+a192);
  a153=(a153*a158);
  a153=(a145+a153);
  a165=(a165+a153);
  a153=(a104*a165);
  a193=(a193-a153);
  a153=(a116*a54);
  a192=(a111*a134);
  a153=(a153-a192);
  a122=(a122+a153);
  a122=(a122+a156);
  a156=(a89*a122);
  a153=(a111*a139);
  a192=(a132*a54);
  a153=(a153-a192);
  a153=(a120+a153);
  a153=(a153+a158);
  a192=(a104*a153);
  a132=(a132*a134);
  a139=(a116*a139);
  a132=(a132-a139);
  a132=(a129+a132);
  a132=(a132+a160);
  a160=(a108*a132);
  a192=(a192+a160);
  a160=(a125*a192);
  a156=(a156-a160);
  a193=(a193+a156);
  a75=(a75+a193);
  a193=(a76*a75);
  a156=(a84*a78);
  a160=(a100*a83);
  a156=(a156+a160);
  a101=(a101*a86);
  a156=(a156+a101);
  a101=(a60*a98);
  a160=(a87*a86);
  a139=(a97*a83);
  a160=(a160-a139);
  a23=(a23-a160);
  a88=(a88*a23);
  a23=(a87*a88);
  a101=(a101-a23);
  a156=(a156+a101);
  a106=(a85*a106);
  a77=(a77*a85);
  a101=(a82*a96);
  a77=(a77+a101);
  a84=(a84*a29);
  a77=(a77+a84);
  a87=(a87*a94);
  a84=(a97*a103);
  a87=(a87-a84);
  a77=(a77+a87);
  a87=(a96*a77);
  a106=(a106-a87);
  a87=(a92*a103);
  a102=(a102*a105);
  a87=(a87-a102);
  a106=(a106+a87);
  a156=(a156+a106);
  a117=(a117*a112);
  a130=(a130*a115);
  a117=(a117+a130);
  a131=(a131*a118);
  a117=(a117+a131);
  a121=(a121*a129);
  a119=(a119*a120);
  a121=(a121-a119);
  a117=(a117+a121);
  a116=(a116*a135);
  a111=(a111*a109);
  a116=(a116-a111);
  a127=(a127*a54);
  a128=(a128*a134);
  a127=(a127-a128);
  a116=(a116+a127);
  a117=(a117+a116);
  a137=(a137*a176);
  a133=(a133*a144);
  a137=(a137-a133);
  a158=(a89*a158);
  a137=(a137-a158);
  a117=(a117+a137);
  a153=(a108*a153);
  a132=(a104*a132);
  a153=(a153-a132);
  a132=(a89*a153);
  a132=(a117-a132);
  a156=(a156+a132);
  a132=(a81*a156);
  a193=(a193+a132);
  a132=(a96*a94);
  a137=(a29*a103);
  a132=(a132-a137);
  a132=(a88+a132);
  a132=(a132+a153);
  a137=(a79*a132);
  a103=(a85*a103);
  a96=(a96*a105);
  a103=(a103-a96);
  a103=(a1+a103);
  a103=(a103+a122);
  a122=(a71*a103);
  a137=(a137+a122);
  a122=(a89*a137);
  a96=(a29*a105);
  a158=(a85*a94);
  a96=(a96-a158);
  a98=(a98+a96);
  a98=(a98+a192);
  a192=(a91*a98);
  a122=(a122-a192);
  a193=(a193+a122);
  a44=(a44+a193);
  a193=(a36*a44);
  a122=(a49*a42);
  a192=(a67*a47);
  a122=(a122+a192);
  a68=(a68*a50);
  a122=(a122+a68);
  a68=(a56*a66);
  a192=(a51*a50);
  a96=(a59*a47);
  a192=(a192-a96);
  a38=(a38-a192);
  a53=(a53*a38);
  a38=(a51*a53);
  a68=(a68-a38);
  a122=(a122+a68);
  a73=(a48*a73);
  a37=(a37*a48);
  a68=(a46*a41);
  a37=(a37+a68);
  a49=(a49*a69);
  a37=(a37+a49);
  a51=(a51*a64);
  a49=(a59*a62);
  a51=(a51+a49);
  a37=(a37-a51);
  a51=(a41*a37);
  a73=(a73-a51);
  a51=(a63*a62);
  a70=(a70*a72);
  a51=(a51-a70);
  a73=(a73+a51);
  a122=(a122+a73);
  a79=(a79*a75);
  a71=(a71*a156);
  a79=(a79+a71);
  a71=(a93*a98);
  a76=(a76*a132);
  a81=(a81*a103);
  a76=(a76+a81);
  a89=(a89*a76);
  a71=(a71-a89);
  a79=(a79+a71);
  a122=(a122+a79);
  a79=(a39*a122);
  a46=(a46*a42);
  a74=(a74*a47);
  a46=(a46+a74);
  a67=(a67*a50);
  a46=(a46+a67);
  a59=(a59*a53);
  a56=(a56*a57);
  a59=(a59-a56);
  a46=(a46+a59);
  a37=(a69*a37);
  a58=(a48*a58);
  a37=(a37-a58);
  a63=(a63*a64);
  a65=(a65*a72);
  a63=(a63-a65);
  a37=(a37+a63);
  a46=(a46+a37);
  a82=(a82*a78);
  a107=(a107*a83);
  a82=(a82+a107);
  a100=(a100*a86);
  a82=(a82+a100);
  a97=(a97*a88);
  a60=(a60*a1);
  a97=(a97-a60);
  a82=(a82+a97);
  a29=(a29*a77);
  a85=(a85*a99);
  a29=(a29-a85);
  a90=(a90*a105);
  a92=(a92*a94);
  a90=(a90-a92);
  a29=(a29+a90);
  a82=(a82+a29);
  a104=(a104*a113);
  a108=(a108*a165);
  a104=(a104+a108);
  a125=(a125*a153);
  a104=(a104+a125);
  a82=(a82+a104);
  a91=(a91*a76);
  a93=(a93*a137);
  a91=(a91-a93);
  a91=(a82+a91);
  a46=(a46+a91);
  a91=(a43*a46);
  a79=(a79-a91);
  a193=(a193+a79);
  a79=(a41*a64);
  a91=(a69*a62);
  a79=(a79+a91);
  a53=(a53-a79);
  a53=(a53+a76);
  a76=(a45*a53);
  a62=(a48*a62);
  a41=(a41*a72);
  a62=(a62-a41);
  a57=(a57+a62);
  a57=(a57+a137);
  a137=(a52*a57);
  a69=(a69*a72);
  a48=(a48*a64);
  a69=(a69+a48);
  a66=(a66+a69);
  a66=(a66+a98);
  a98=(a40*a66);
  a137=(a137-a98);
  a76=(a76+a137);
  a137=(a21*a76);
  a193=(a193-a137);
  a6=(a6+a193);
  a6=(a4*a6);
  a193=(a27*a5);
  a32=(a32*a11);
  a193=(a193-a32);
  a32=(a7*a13);
  a193=(a193+a32);
  a32=(a15*a5);
  a137=(a20*a11);
  a32=(a32+a137);
  a25=(a25-a32);
  a16=(a16*a25);
  a25=(a20*a16);
  a18=(a17*a18);
  a25=(a25-a18);
  a193=(a193+a25);
  a25=(a3*a8);
  a7=(a7*a14);
  a25=(a25-a7);
  a12=(a12*a10);
  a25=(a25+a12);
  a12=(a15*a34);
  a20=(a20*a30);
  a12=(a12+a20);
  a25=(a25+a12);
  a12=(a8*a25);
  a26=(a10*a26);
  a12=(a12-a26);
  a26=(a22*a34);
  a12=(a12+a26);
  a193=(a193+a12);
  a45=(a45*a44);
  a52=(a52*a122);
  a40=(a40*a46);
  a52=(a52-a40);
  a45=(a45+a52);
  a36=(a36*a53);
  a39=(a39*a57);
  a43=(a43*a66);
  a39=(a39-a43);
  a36=(a36+a39);
  a39=(a21*a36);
  a53=(a33*a53);
  a66=(a35*a66);
  a53=(a53+a66);
  a53=(a55*a53);
  a39=(a39-a53);
  a45=(a45+a39);
  a193=(a193+a45);
  a193=(a2*a193);
  a6=(a6-a193);
  a193=(a8*a28);
  a45=(a10*a34);
  a193=(a193+a45);
  a193=(a24-a193);
  a193=(a193+a76);
  a4=(a4*a193);
  a8=(a8*a30);
  a34=(a14*a34);
  a8=(a8-a34);
  a8=(a16+a8);
  a8=(a8+a36);
  a2=(a2*a8);
  a4=(a4+a2);
  a21=(a21*a4);
  a6=(a6-a21);
  a0=(a0+a6);
  if (res[0]!=0) res[0][0]=a0;
  a19=(a19*a5);
  a27=(a27*a11);
  a19=(a19-a27);
  a3=(a3*a13);
  a19=(a19+a3);
  a17=(a17*a24);
  a15=(a15*a16);
  a17=(a17-a15);
  a19=(a19+a17);
  a10=(a10*a31);
  a14=(a14*a25);
  a10=(a10+a14);
  a22=(a22*a30);
  a9=(a9*a28);
  a22=(a22-a9);
  a10=(a10+a22);
  a19=(a19+a10);
  a33=(a33*a44);
  a35=(a35*a46);
  a33=(a33+a35);
  a55=(a55*a76);
  a33=(a33+a55);
  a19=(a19+a33);
  if (res[0]!=0) res[0][1]=a19;
  if (res[0]!=0) res[0][2]=a122;
  if (res[0]!=0) res[0][3]=a82;
  if (res[0]!=0) res[0][4]=a117;
  if (res[0]!=0) res[0][5]=a145;
  if (res[0]!=0) res[0][6]=a179;
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

CASADI_SYMBOL_EXPORT casadi_real rnea_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* rnea_name_in(casadi_int i) {
  switch (i) {
    case 0: return "q";
    case 1: return "dq";
    case 2: return "ddq";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* rnea_name_out(casadi_int i) {
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