#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

int fib(int n){
    if (n == 1) return 1;
    else if (n == 2) return 2;
        else return fib(n - 1) + fib(n - 2);
}

int main(){
    int N;
    int sum = 0;
    
    cin >> N;

    for (int i = 2; i < N + 1; i += 3){
            sum += fib(i);
    }

    cout << sum;
    return 0;
}


