#pragma once

#include <cmath>

[[nodiscard]] inline bool is_finite(double x) {
    return std::isfinite(x);
}

#define EXPECT(cond, msg) \
    do { if (!(cond)) throw std::invalid_argument(msg); } while(0)

    