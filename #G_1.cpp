#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    long long n;
    long long k = 2;
    
    cin >> n;
    if ((n == 1) || (n == 2)){
        cout << 1;
        return 0;
    }

    do {
        if (n%k == 0){
            cout << 0;
            return 0;
        }
        k += 1;
    }while (k <= sqrt(n));
    
    cout << 1;

    return 0;
}
