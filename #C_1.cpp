#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    long long i;
    long long k = 0;
    do {
        cin >> i;
        if (i%2 == 0) k += 1;
    }while (i != 0);

    cout << k - 1;
    return 0;
}
