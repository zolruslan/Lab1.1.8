#include <Cmath>
#include "CKut.h"
#include "Compare.h"

bool Compare (CKut *kut1, CKut *kut2) {
    int g = fabs(kut1->g - kut2->g);
    while (g > 180)
        g -= 180;
    if (g == 90)
        return true;
    else
        return false;
}
