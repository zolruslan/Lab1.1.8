#ifndef EXAM_H
#define EXAM_H

class CKut {
private:
    int g;
    friend bool Compare (CKut *kut1, CKut *kut2);
public:
    CKut(int g);
    CKut(CKut *kut);
};

#endif
