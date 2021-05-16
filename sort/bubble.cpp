#include <iostream>
#include <string>
#include <stack>
#include <cmath>
#include <vector>
#include <sstream>
#include <list>
#include <cstdlib>

using namespace std;

void bubbleSortCounter(int* mass,int n) {
    int prevElement = 0, counter = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (mass[j] > mass[j + 1]) {
                prevElement = mass[j];
                mass[j] = mass[j + 1];
                mass[j + 1] = prevElement;
        
            }
        }
    }
    
}

int main(){
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    
    bubbleSortCounter(array, n);
    
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }

    return 0;
}
