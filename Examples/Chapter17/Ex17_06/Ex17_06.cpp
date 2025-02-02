// Use of a pass-by-value parameter to pass by either lvalue or rvalue
#include "Array.h"
#include <string>

// Construct an Array<> of a given size, filled with some arbitrary string data
Array<std::string> buildStringArray(const size_t size) {
    Array<std::string> result{size};
    for (size_t i = 0; i < size; ++i) {
        result[i] = "You should learn from your competitor, but never copy. Copy and you die.";
    }
    return result;
}

int main() {
    Array<std::string> lvalue = buildStringArray(1'000);

    Array<Array<std::string>> array1;
    array1.push_back(lvalue);              // Push a lvalue

    Array<Array<std::string>> array2;
    array2.push_back(std::move(lvalue));   // Push a rvalue
}