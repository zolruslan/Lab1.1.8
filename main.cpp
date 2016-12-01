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
    delete kut1;
    delete kut2;

    kut1 = new CKut (55);
    kut2 = new CKut (35);

        if (Compare(kut1, kut2))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    delete kut1;
    delete kut2;

        kut1 = new CKut (90);
    kut2 = new CKut (0);

        if (Compare(kut1, kut2))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
