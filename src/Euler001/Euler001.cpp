#include "Euler001.hpp"

#include <cstdint>
#include <iostream>

// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.

void Euler001::Run() {
    uint32_t result = 0;

    for (uint32_t i = 0; i < 1000; ++i) {
        if ((i % 3 == 0) or (i % 5 == 0)) {
            result += i;
        }
    }

    std::cout << "Answer: " << result << '\n';
}
