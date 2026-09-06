#include <iostream>
#include <string>

static int takeInput() {
    std::string input;
    std::cout << "enter a string: \n";
    std::cin >> input;
    std::cout << "your word was: " << input;
    return 0;
}

int main() {
    takeInput();
    return 0;
}