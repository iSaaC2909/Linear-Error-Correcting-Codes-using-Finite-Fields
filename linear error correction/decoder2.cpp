#include <iostream>
#include <galois/galois.h>

int main() {
    // Define the finite field
    galois::Field field(4);

    // Define the parity-check matrix
    galois::Matrix<galois::Field> H(4, 15, field);
    H(0, 0) = 1; H(0, 7) = 1; H(0, 8) = 1; H(0, 10) = 1;
    H(1, 1) = 1; H(1, 7) = 1; H(1, 9) = 1; H(1, 11) = 1;
    H(2, 2) = 1; H(2, 8) = 1; H(2, 9) = 1; H(2, 12) = 1;
    H(3, 3) = 1; H(3, 7) = 1; H(3, 10) = 1; H(3