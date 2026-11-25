#include <vector>
#include <utility>
#include "sorts.h"

static void quick(std::vector<int>& a, int lo, int hi) {
    if (lo >= hi) return;
    int p = a[(lo + hi) / 2], i = lo, j = hi;
    while (i <= j) {
        while (a[i] < p) ++i;
        while (a[j] > p) --j;
        if (i <= j) std::swap(a[i++], a[j--]);
    }
    quick(a, lo, j);
    quick(a, i, hi);
}

// Швидке сортування (метод Хоара)
void quickSort(std::vector<int>& a) {
    if (!a.empty()) quick(a, 0, (int)a.size() - 1);
}
