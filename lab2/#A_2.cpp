#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    long long a;
    long long b;
    
    cin >> a;
    cin >> b;
    
    while (a != b) {
        if (a < b) b = b - a;
        else a = a - b;
    }
    cout << a;
    return 0;
}
