#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

int main(){
    int N;
    
    cin >> N;
    for (int i = 1; i < N + 1; i++){
        for (int l = 0; l < i; l++){
            cout << "*";
            
        }
        cout << '\n';
    }
    return 0;
}

