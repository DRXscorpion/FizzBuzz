#include <iostream>
#include <string>

int main() {
    for (int i = 1; i <= 100; i++) {
        std::string Final;
        if (i % 3 == 0) { Final += "Fizz"; }
        if (i % 5 == 0) { Final += "Buzz"; } 
        else if (i % 5 != 0 && i % 3 != 0) { Final += std::to_string(i); }
        std::cout << Final << std::endl;
    }
}
