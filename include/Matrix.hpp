#pragma once
#include <vector>

namespace LinearAlgebra {
    class Matrix {
        std::vector<std::vector<float>> data; // this is implicitly private ig

    public:
        // explicit removes lookalike types auto-resolving to a custom Class type if that class' constructor only has one param
        explicit Matrix(std::vector<std::vector<float>>);
        float total() const;
        float determinant() const;
        static Matrix sum(Matrix matrix1, Matrix matrix2);
        static Matrix product(Matrix matrix1, Matrix matrix2);
    };
}

