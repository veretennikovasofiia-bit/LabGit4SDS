#include <vector>
#include <utility>
#include "sorts.h"

// Сортування бульбашкою
void bubbleSort(std::vector<int>& a) {
    for (size_t i = 0; i + 1 < a.size(); ++i)
        for (size_t j = 0; j + 1 < a.size() - i; ++j)
            if (a[j] > a[j + 1]) std::swap(a[j], a[j + 1]);
}

// Сортування вставками
void insertionSort(std::vector<int>& a) {
    for (size_t i = 1; i < a.size(); ++i) {
        int key = a[i];
        size_t j = i;
        while (j > 0 && a[j - 1] > key) { a[j] = a[j - 1]; --j; }
        a[j] = key;
    }
}
