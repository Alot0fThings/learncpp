#include <iostream>
#include <string>
#include "../include/Matrix.hpp"

std::string matrix1, matrix2;

static void processInput() {

}

static void askInput(std::string message, std::string& input) {
    std::cout << message;
    std::cin >> input;
    if (input == "EXIT") {
        throw std::logic_error(""); // temporary way to break loop
    }
}

int main() {

    // try {
    //     while (true) {
    //         askInput("enter a matrix", matrix1);
    //         askInput("enter another matrix", matrix2);
    //         processInput();
    //     }
    // } catch (std::logic_error& e) {
    //     std::cout << "this is my cheap way of exiting the loop";
    // }
    LinearAlgebra::Matrix matrix({{1,2},{3,4}});
    std::cout << matrix.total();
    return 0;
}