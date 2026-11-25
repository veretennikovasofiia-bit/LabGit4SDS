#include <iostream>
#include <vector>
#include <functional>
#include "sorts.h"

static void test(const char* name, std::function<void(std::vector<int>&)> f) {
    std::vector<int> a = {5, 2, 9, 1, 5, 6, -3, 0};
    f(a);
    std::cout << name << ": ";
    for (int x : a) std::cout << x << ' ';
    std::cout << '\n';
}

int main() {
    test("Bubble", bubbleSort);
    test("Insertion", insertionSort);
    test("Shell", shellSort);
    test("Selection", selectionSort);
    test("Quick", quickSort);
}
