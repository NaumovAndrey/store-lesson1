#pragma once

#include <cmath>

[[nodiscard]] inline bool is_finite(double x) {
    return std::isfinite(x);
}