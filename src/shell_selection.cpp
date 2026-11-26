#include <vector>
#include <utility>
#include "sorts.h"

// Сортування Шелла
void shellSort(std::vector<int>& a) {
    for (size_t gap = a.size() / 2; gap > 0; gap /= 2)
        for (size_t i = gap; i < a.size(); ++i) {
            int tmp = a[i];
            size_t j = i;
            for (; j >= gap && a[j - gap] > tmp; j -= gap)
                a[j] = a[j - gap];
            a[j] = tmp;
        }
}

// Сортування вибором
void selectionSort(std::vector<int>& a) {
    for (size_t i = 0; i + 1 < a.size(); ++i) {
        size_t m = i;
        for (size_t j = i + 1; j < a.size(); ++j)
            if (a[j] < a[m]) m = j;
        std::swap(a[i], a[m]);
    }
}

