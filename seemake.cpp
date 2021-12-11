#include <iostream>
#ifdef USE_MATH
    #include "MathFun.h"
#else
    #include <cmath>
#endif

#include "TutorialConfig.h"

int main() {
    std::cout << Tutorial_VERSION_MAJOR << std::endl;

#ifdef USE_MATH
    const double outval = MathFun::mysqrt<double>(9);
#else
    const double outval = std::sqrt(9);
#endif

    std::cout << outval << std::endl;
    return 0;
}