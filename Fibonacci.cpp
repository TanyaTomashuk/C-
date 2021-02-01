#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

long long fib_ev(long long n){
    if (n == 1) return 2;
    if (n == 2) return 8;
        else return 4 * fib_ev(n - 1) + fib_ev(n - 2);
}

int main(){
    long long N;
    long long sum = 0;
    
    cin >> N;
    if (fib_ev((N + 1) / 3) <= 4'000'000){
        for (long long i = 1; i <= ((N + 1) / 3); i += 1){
            sum += fib_ev(i);
        }
    }
    else
        for (long long i = 1; i <= ((N + 1) / 3); i += 1){
            if (fib_ev(i) <= 4'000'000) sum += fib_ev(i);
        }

    cout << sum;
    return 0;
}


