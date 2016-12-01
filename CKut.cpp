#include "CKut.h"

CKut::CKut (int g)
    :g(g) {
    }

CKut::CKut(CKut *kut)
    :g(kut->g) {
    }
