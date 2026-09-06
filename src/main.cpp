#include <iostream>
#include <string>

std::string matrix1, matrix2;

static int processInput() {

    return 0;
}

static int askInput(std::string message, std::string& input) {
    std::cout << message;
    std::cin >> input;
    if (input == "EXIT") {
        throw std::logic_error(""); // temporary exception
    }
    return 0;
}

int main() {

    try {
        while (true) {
            askInput("enter a matrix", matrix1);
            askInput("enter another matrix", matrix2);
            processInput();
        }
    } catch (std::logic_error& e) {
        std::cout << "this is my cheap way of exiting the loop";
    }

    return 0;
}