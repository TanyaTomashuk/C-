#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    long long i;
    long long f = 0;
    
    do {
        cin >> i;
        if (i%2 == 0){
            if (i > f) f = i;
        }
    }while (i != 0);
    cout << f;
    return 0;
}
