#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

int main(){
    int N;
    
    cin >> N;
    for (int i = 0; i < N; i++){
        for (int l = 0; l < i; l++){
            cout << ' ';
            
        }
        for (int j = 0; j < N - 2 * i; j++){
            cout << "*";
            
        }
        cout << '\n';
    }
    return 0;
}
