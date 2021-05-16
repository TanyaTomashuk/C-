#include <iostream>
#include <string>
#include <stack>
#include <cmath>
#include <vector>
#include <sstream>
#include <list>
#include <cstdlib>

using namespace std;


template <class T>
T hoarePartition(T* begin, T* end, T pivot) {
    size_t i = 0;
    size_t j = (end - begin);

    while (i <= j) {
        while (*(begin + i) < pivot) ++i;
        while (*(begin + j) > pivot) --j;

        if (i >= j) break;
        std::swap(*(begin + i), *(begin + j));
        ++i;
        --j;
    }

    return i;
}

template<class T>
T choosePivot(T* begin, T* end) {
    return *(end - (end - begin) / 2);
}

template<class T>
void quickSort(T* begin, T* end) {
    if ((end - begin) <= 0) return;

    T pivot = choosePivot(begin, end);

    T i = hoarePartition(begin, end, pivot);

    quickSort(begin, begin + i - 1);

    quickSort(begin + i, end);
}

int main(){
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    
    quickSort(array, array + (n - 1));
    
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }

    return 0;
}
