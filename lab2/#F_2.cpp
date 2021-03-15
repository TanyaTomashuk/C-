#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    long long i;
    long long f = 0;
    long long k = 1;
    
    do {
        cin >> i;
        if (i == f) k += 1;
        if (i > f) {
            f = i;
            k = 1;
        }
    }while (i != 0);
    cout << k;
    return 0;
}
