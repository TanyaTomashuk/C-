#include <iostream>
#include <string>
#include <stack>
#include <cmath>
#include <vector>
#include <list>

using namespace std;

int numb(int n) {
    if ((n == 0) || (n == 1)) return 1;
    if (n == 2) return 2;
    if (n == 3) return 4;
    else return numb(n - 1) + numb(n - 2) + numb(n - 3);
}

int main() {
    int n;
    cin >> n;
    cout << numb(n);
    return 0;
}
