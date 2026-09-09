//
// Created by ryany on 9/8/2026.
//

#include "../include/Matrix.hpp"

namespace LinearAlgebra {
    Matrix::Matrix(std::vector<std::vector<float>> data) : data(std::move(data)) {}

    float Matrix::total() const {
        float sum = 0;
        for (const std::vector<float>& row: this->data) {
            for (const float& col : row) {
                sum+=col;
            }
        }
        return sum;
    }

    float Matrix::determinant() const {
        if (this->data.size() != this->data[0].size()) {
            // throw new std::logic_error(); throw something here. change .hpp header for htis
        }
    }
}
