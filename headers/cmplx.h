/* various complex number defs */
#ifndef _CMPLX_DEFINED
#define _CMPLX_DEFINED


struct DHyperComplex {
    double x,y;
    double z,t;
};

struct LHyperComplex {
    long x,y;
    long z,t;
};

struct DComplex {
#ifndef XFRACT
  double x,y;
#else
  LDBL x,y;
#endif
};

struct LDComplex {
    LDBL x,y;
};

struct LComplex {
    long x,y;
};

typedef struct  DComplex         _CMPLX;
typedef struct  LDComplex        _LDCMPLX;
typedef struct  LComplex         _LCMPLX;
typedef struct  DHyperComplex    _HCMPLX;
typedef struct  LHyperComplex    _LHCMPLX;
#endif
