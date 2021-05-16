#include <iostream>
#include <string>
#include <stack>
#include <cmath>
#include <vector>
#include <sstream>
#include <list>
#include <cstdlib>

using namespace std;

void heapSort(int* begin, int* end);
void siftDown(int* parent, int* begin, int* end);
void buildHeap(int* begin, int* end);

void siftDown(int* parent, int* begin, int* end) {
    int* leftKid = ((parent - begin) * 2 + begin + 1);
    int* rightKid = ((parent - begin) * 2 + begin + 2);
    int* max;
    if ((leftKid <= end) && (*parent <= *leftKid)) {
            max = leftKid;
    }
    else {
        max = parent;
    }
    if ((rightKid <= end) && *max <= *rightKid) {
        max = rightKid;
    }
    if (max != parent) {
        std::swap(*parent, *max);
        siftDown(max, begin, end);
    }
}

void buildHeap(int* begin, int* end) {
    for (int i = (end - begin) / 2 + 1; i >= 0; i--) {
        siftDown(begin + i, begin, end);
    }
}

void heapSort(int* begin, int* end) {
    int* prevend = end;
    for (size_t i = (prevend - begin); i > 0; i--) {
        std::swap(*begin, *(begin + i));
        end -= 1;
        siftDown(begin, begin, end);
    }
}

int main(){
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    
    heapSort(array, array + (n - 1));
    
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }

    return 0;
}
