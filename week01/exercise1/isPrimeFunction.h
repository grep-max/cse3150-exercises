#ifndef __ISPRIMEFUNCTION_H
#define __ISPRIMEFUNCTION_H
#include <cmath>


bool isPrimeInteger(int pTest) {
    bool isPrime = true;
    if (pTest == 2) return isPrime; //edge case 2
    if (pTest < 1) return false; //edge case 1 or lower
    

    for (int i = 2; i < static_cast<int>(floor(sqrt(pTest))); i++) {
        if (pTest % i == 0) {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

#endif
