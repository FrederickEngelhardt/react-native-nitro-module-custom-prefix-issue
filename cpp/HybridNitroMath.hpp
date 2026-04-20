#pragma once
#include <vector>
#include "HybridNitroMathSpec.hpp"

namespace margelo::nitro::nitromath {
class HybridNitroMath : public HybridNitroMathSpec {
    public:
        HybridNitroMath() : HybridObject(TAG), HybridNitroMathSpec() {}
       
        double sum(double a, double b) override;
    };
} // namespace margelo::nitro::nitromath
