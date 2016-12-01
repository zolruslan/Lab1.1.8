#include <iostream>
#include "CKut.h"

using namespace std;

int main(void) {
    CKut
        *kut1 = new CKut(10),
        *kut2 = new CKut(280);
    if (Compare(kut1, kut2))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
